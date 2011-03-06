#!/bin/bash
PLUGDIR=$TARGET_BUILD_DIR/opencpn.app/Contents/SharedSupport/plugins
mkdir -p $PLUGDIR
cp $BUILD_DIR/plugins/dashboard_pi/$CONFIGURATION/libdashboard_pi.dylib $PLUGDIR
install_name_tool -change /opt/local/lib/libwx_macu-2.8.0.dylib \
	@executable_path/../Frameworks/libwx_macu-2.8.0.dylib $PLUGDIR/libdashboard_pi.dylib
cp $BUILD_DIR/plugins/grib_pi/$CONFIGURATION/libgrib_pi.dylib $PLUGDIR
install_name_tool -change /opt/local/lib/libwx_macu-2.8.0.dylib \
	@executable_path/../Frameworks/libwx_macu-2.8.0.dylib $PLUGDIR/libgrib_pi.dylib

