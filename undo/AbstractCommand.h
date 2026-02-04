#pragma once

#include <QDateTime>
#include <QSvgRenderer>
#include <QUndoCommand>
#include <QJsonObject>
#include <QString>
#include <QIcon>

class LayerItem;
class ImageView;

/**
 * @brief Basisklasse für alle serialisierbaren Undo/Redo Commands
 *
 * - Erweitert QUndoCommand
 * - Erzwingt JSON-Serialisierung
 * - Ermöglicht Rekonstruktion nach Neustart
 */
class AbstractCommand : public QUndoCommand
{

public:

    explicit AbstractCommand( QUndoCommand* parent = nullptr );
    virtual ~AbstractCommand() override = default;

    // ---- Serialisierung ----
    virtual int id() const override = 0;
    virtual LayerItem* layer() const = 0;
    virtual QString type() const = 0;
    virtual QJsonObject toJson() const {
        QJsonObject obj;
        obj["text"] = text();
        return obj;
    };

    // ---- Factory ----
    static AbstractCommand* fromJson( const QJsonObject& obj, const QList<LayerItem*>& layers );
    static AbstractCommand* fromJson( const QJsonObject& obj, ImageView* view );
    
    // --- ---
    QString timeString() const { return m_timestamp.toString("HH:mm"); }
    void setIcon( const QIcon &icon ) { m_icon = icon; }
    QIcon icon() const { return m_icon; }
      
    // --- Static Helper ---
    static LayerItem* getLayerItem( const QList<LayerItem*>& layers, int layerId = 0 );
    static QIcon getIconFromSvg( const QByteArray &svgData );
    
private:

    QIcon m_icon;
    QDateTime m_timestamp;
    
};
