#!/bin/bash
PODIR=$SOURCE_ROOT/po/
for i in $PODIR*.po
do
tmp=${i#$PODIR}
o=$BUILD_ROOT/${tmp/.po/.mo}
/opt/local/bin/msgfmt --check -o $o $i
done
