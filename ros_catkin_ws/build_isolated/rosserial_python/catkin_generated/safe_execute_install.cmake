execute_process(COMMAND "/home/odroid/ros_catkin_ws/build_isolated/rosserial_python/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/odroid/ros_catkin_ws/build_isolated/rosserial_python/catkin_generated/python_distutils_install.sh) returned error code ")
endif()