#!/bin/bash
LOCDIR=$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/SharedSupport/locale
mkdir -p $LOCDIR

for i in $BUILD_ROOT/*.mo
do
lan=${i#$BUILD_ROOT/opencpn_}
dir=$LOCDIR/${lan%.mo}/LC_MESSAGES
mkdir -p $dir
cp $i $dir/opencpn.mo
done

for p in $BUILD_ROOT/plugins/*
do
plg=${p#$BUILD_ROOT/plugins/}
for i in $BUILD_ROOT/plugins/$plg/*.mo
do
lan=${i#$BUILD_ROOT/plugins/$plg/}
dir=$LOCDIR/${lan%.mo}/LC_MESSAGES
mkdir -p $dir
cp $i $dir/opencpn-$plg.mo
done
done
