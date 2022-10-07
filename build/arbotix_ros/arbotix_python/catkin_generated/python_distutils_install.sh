#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/alex/Desktop/widowxl_ws/src/arbotix_ros/arbotix_python"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/alex/Desktop/widowxl_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/alex/Desktop/widowxl_ws/install/lib/python2.7/dist-packages:/home/alex/Desktop/widowxl_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/alex/Desktop/widowxl_ws/build" \
    "/usr/bin/python2" \
    "/home/alex/Desktop/widowxl_ws/src/arbotix_ros/arbotix_python/setup.py" \
     \
    build --build-base "/home/alex/Desktop/widowxl_ws/build/arbotix_ros/arbotix_python" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/alex/Desktop/widowxl_ws/install" --install-scripts="/home/alex/Desktop/widowxl_ws/install/bin"
