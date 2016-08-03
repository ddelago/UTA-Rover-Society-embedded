# -*- coding: utf-8 -*-
from __future__ import print_function
import argparse
import os
import stat
import sys

# find the import for catkin's python package - either from source space or from an installed underlay
if os.path.exists(os.path.join('/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake', 'catkinConfig.cmake.in')):
    sys.path.insert(0, os.path.join('/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake', '..', 'python'))
try:
    from catkin.environment_cache import generate_environment_script
except ImportError:
    # search for catkin package in all workspaces and prepend to path
    for workspace in "/home/odroid/ros_catkin_ws/devel_isolated/rosbuild;/home/odroid/ros_catkin_ws/devel_isolated/rosboost_cfg;/home/odroid/ros_catkin_ws/devel_isolated/rosbash;/home/odroid/ros_catkin_ws/devel_isolated/ros_comm;/home/odroid/ros_catkin_ws/devel_isolated/ros;/home/odroid/ros_catkin_ws/devel_isolated/mk;/home/odroid/ros_catkin_ws/devel_isolated/message_runtime;/home/odroid/ros_catkin_ws/devel_isolated/message_generation;/home/odroid/ros_catkin_ws/devel_isolated/cpp_common;/home/odroid/ros_catkin_ws/devel_isolated/common_msgs;/home/odroid/ros_catkin_ws/devel_isolated/cmake_modules;/home/odroid/ros_catkin_ws/devel_isolated/genpy;/home/odroid/ros_catkin_ws/devel_isolated/genlisp;/home/odroid/ros_catkin_ws/devel_isolated/geneus;/home/odroid/ros_catkin_ws/devel_isolated/gencpp;/home/odroid/ros_catkin_ws/devel_isolated/genmsg;/home/odroid/ros_catkin_ws/devel_isolated/catkin;/home/odroid/ros_catkin_ws/install_isolated".split(';'):
        python_path = os.path.join(workspace, 'lib/python2.7/dist-packages')
        if os.path.isdir(os.path.join(python_path, 'catkin')):
            sys.path.insert(0, python_path)
            break
    from catkin.environment_cache import generate_environment_script

code = generate_environment_script('/home/odroid/ros_catkin_ws/devel_isolated/rosclean/env.sh')

output_filename = '/home/odroid/ros_catkin_ws/build_isolated/rosclean/catkin_generated/setup_cached.sh'
with open(output_filename, 'w') as f:
    #print('Generate script for cached setup "%s"' % output_filename)
    f.write('\n'.join(code))

mode = os.stat(output_filename).st_mode
os.chmod(output_filename, mode | stat.S_IXUSR)
