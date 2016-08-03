# CMake generated Testfile for 
# Source directory: /home/odroid/ros_catkin_ws/src/ros_comm/rostopic
# Build directory: /home/odroid/ros_catkin_ws/build_isolated/rostopic
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rostopic_rostest_test_rostopic.test "/home/odroid/ros_catkin_ws/build_isolated/rostopic/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/rostopic/test_results/rostopic/rostest-test_rostopic.xml" "--return-code" "/home/odroid/ros_catkin_ws/install_isolated/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/odroid/ros_catkin_ws/src/ros_comm/rostopic --package=rostopic --results-filename test_rostopic.xml --results-base-dir \"/home/odroid/ros_catkin_ws/build_isolated/rostopic/test_results\" /home/odroid/ros_catkin_ws/src/ros_comm/rostopic/test/rostopic.test ")
subdirs(gtest)
