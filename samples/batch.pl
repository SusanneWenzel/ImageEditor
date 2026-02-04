use strict;

my $program = "../build/ImageEditor --batch";

print "Select batch job [1]: ";
my $batchId = <STDIN>;
chomp($batchId);

my $projectfile = "projects/imageeditor_batch".$batchId.".json";
if ( -e $projectfile ) {
 system($program." --force --project $projectfile --output test".$batchId.".png");
} else {
 die "FATAL ERROR: Invalid project file '".$projectfile."': $!";
}
