#pragma once

#include <QUndoCommand>
#include <QPointF>

#include "AbstractCommand.h"
#include "../layer/LayerItem.h"

class MoveLayerCommand : public AbstractCommand
{

public:

    MoveLayerCommand( LayerItem* layer, const QPointF& oldPos, const QPointF& newPos, const int idx=0, QUndoCommand* parent = nullptr );
    
    QString type() const override { return "MoveLayer"; }
    LayerItem* layer() const override { return m_layer; }
    int id() const override { return 1005; }
    
    void undo() override;
    void redo() override;
    
    QJsonObject toJson() const override;
    static MoveLayerCommand* fromJson( const QJsonObject& obj, const QList<LayerItem*>& layers );

private:

    int m_layerId;
    LayerItem* m_layer;
    QPointF m_oldPos;
    QPointF m_newPos;
    
};