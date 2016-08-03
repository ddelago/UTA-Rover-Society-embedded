# CMake generated Testfile for 
# Source directory: /home/odroid/ros_catkin_ws/src/genpy
# Build directory: /home/odroid/ros_catkin_ws/build_isolated/genpy
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_genpy_nosetests_test "/home/odroid/ros_catkin_ws/build_isolated/genpy/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/genpy/test_results/genpy/nosetests-test.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/odroid/ros_catkin_ws/build_isolated/genpy/test_results/genpy" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/odroid/ros_catkin_ws/src/genpy/test --with-xunit --xunit-file=/home/odroid/ros_catkin_ws/build_isolated/genpy/test_results/genpy/nosetests-test.xml")
subdirs(gtest)
subdirs(scripts)
