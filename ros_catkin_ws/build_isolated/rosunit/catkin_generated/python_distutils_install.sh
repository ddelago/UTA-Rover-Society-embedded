#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/odroid/ros_catkin_ws/src/ros/rosunit"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/odroid/ros_catkin_ws/install_isolated/lib/python2.7/dist-packages:/home/odroid/ros_catkin_ws/build_isolated/rosunit/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/odroid/ros_catkin_ws/build_isolated/rosunit" \
    "/usr/bin/python" \
    "/home/odroid/ros_catkin_ws/src/ros/rosunit/setup.py" \
    build --build-base "/home/odroid/ros_catkin_ws/build_isolated/rosunit" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/odroid/ros_catkin_ws/install_isolated" --install-scripts="/home/odroid/ros_catkin_ws/install_isolated/bin"
