#!/bin/bash
bundledir=$BUILT_PRODUCTS_DIR/$PRODUCT_NAME.app
wxlibs="libwx_macu-2.8.0.dylib libwx_macu_svg-2.8.0.dylib libwx_macu_stc-2.8.0.dylib libwx_macu_plot-2.8.0.dylib libwx_macu_ogl-2.8.0.dylib libwx_macu_gl-2.8.0.dylib libwx_macu_gizmos-2.8.0.dylib libwx_macu_gizmos_xrc-2.8.0.dylib libwx_macu_fl-2.8.0.dylib libgobject-2.0.0.dylib libiconv.2.dylib libpng14.14.dylib libjpeg.8.dylib libtiff.3.dylib libSDL-1.2.0.dylib libglib-2.0.0.dylib libgthread-2.0.0.dylib libintl.8.dylib"

for l in $wxlibs
do
echo Fixing $l references
# The lib itself
install_name_tool \
		  -id @executable_path/../Frameworks/$l \
		  $bundledir/Contents/Frameworks/$l
# The app
install_name_tool \
		  -change /opt/local/lib/$l @executable_path/../Frameworks/$l \
		  $bundledir/Contents/MacOS/opencpn
# The other libs (recursive depencies)
for k in $wxlibs; do
install_name_tool \
		  -change /opt/local/lib/$l @executable_path/../Frameworks/$l \
		  $bundledir/Contents/Frameworks/$k
done
done

