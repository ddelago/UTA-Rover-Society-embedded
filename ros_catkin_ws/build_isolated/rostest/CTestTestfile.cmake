# CMake generated Testfile for 
# Source directory: /home/odroid/ros_catkin_ws/src/ros_comm/rostest
# Build directory: /home/odroid/ros_catkin_ws/build_isolated/rostest
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rostest_gtest_test_permuter "/home/odroid/ros_catkin_ws/build_isolated/rostest/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results/rostest/gtest-test_permuter.xml" "--return-code" "/home/odroid/ros_catkin_ws/devel_isolated/rostest/lib/rostest/test_permuter --gtest_output=xml:/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results/rostest/gtest-test_permuter.xml")
add_test(_ctest_rostest_rostest_test_hztest0.test "/home/odroid/ros_catkin_ws/build_isolated/rostest/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results/rostest/rostest-test_hztest0.xml" "--return-code" "/home/odroid/ros_catkin_ws/src/ros_comm/rostest/scripts/rostest --pkgdir=/home/odroid/ros_catkin_ws/src/ros_comm/rostest --package=rostest --results-filename test_hztest0.xml --results-base-dir \"/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results\" /home/odroid/ros_catkin_ws/src/ros_comm/rostest/test/hztest0.test ")
add_test(_ctest_rostest_rostest_test_hztest.test "/home/odroid/ros_catkin_ws/build_isolated/rostest/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results/rostest/rostest-test_hztest.xml" "--return-code" "/home/odroid/ros_catkin_ws/src/ros_comm/rostest/scripts/rostest --pkgdir=/home/odroid/ros_catkin_ws/src/ros_comm/rostest --package=rostest --results-filename test_hztest.xml --results-base-dir \"/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results\" /home/odroid/ros_catkin_ws/src/ros_comm/rostest/test/hztest.test ")
add_test(_ctest_rostest_rostest_test_clean_master.test "/home/odroid/ros_catkin_ws/build_isolated/rostest/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results/rostest/rostest-test_clean_master.xml" "--return-code" "/home/odroid/ros_catkin_ws/src/ros_comm/rostest/scripts/rostest --pkgdir=/home/odroid/ros_catkin_ws/src/ros_comm/rostest --package=rostest --results-filename test_clean_master.xml --results-base-dir \"/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results\" /home/odroid/ros_catkin_ws/src/ros_comm/rostest/test/clean_master.test ")
add_test(_ctest_rostest_rostest_test_distro_version.test "/home/odroid/ros_catkin_ws/build_isolated/rostest/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/odroid/ros_catkin_ws/install_isolated/share/catkin/cmake/test/run_tests.py" "/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results/rostest/rostest-test_distro_version.xml" "--return-code" "/home/odroid/ros_catkin_ws/src/ros_comm/rostest/scripts/rostest --pkgdir=/home/odroid/ros_catkin_ws/src/ros_comm/rostest --package=rostest --results-filename test_distro_version.xml --results-base-dir \"/home/odroid/ros_catkin_ws/build_isolated/rostest/test_results\" /home/odroid/ros_catkin_ws/src/ros_comm/rostest/test/distro_version.test ")
subdirs(gtest)
