# CMake generated Testfile for 
# Source directory: /home/odroid/ros_catkin_ws/src/roslint
# Build directory: /home/odroid/ros_catkin_ws/build_isolated/roslint
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_roslint_roslint_package "/home/odroid/ros_catkin_ws/build_isolated/roslint/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/roslint/test_results/roslint/roslint-roslint.xml" "--working-dir" "/home/odroid/ros_catkin_ws/build_isolated/roslint" "--return-code" "/home/odroid/ros_catkin_ws/src/roslint/scripts/test_wrapper /home/odroid/ros_catkin_ws/build_isolated/roslint/test_results/roslint/roslint-roslint.xml make roslint_roslint")
subdirs(gtest)
