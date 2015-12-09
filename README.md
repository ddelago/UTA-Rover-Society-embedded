# README #


### What is this repository for? ###

* This repository is the UTA Rover embedded repository consisting of hardware code and software code to integrate:
-AHRS+ Imu
-Ublox 6010 GPS chipset with a patch antenna 
- Xtion Pro/ Kinect V2
-GoPro with 360 Spherical Lens
-HD USB cameras

* The code is to run on a ODroid XU4 with a Ubiquiti Rocketship M2 Titatinum wireless transmitter.
* Diagram structure of the framework is here:....
 
* Version 1.0

### How do I get set up? ###

* Summary of set up
* This is code is being run and tested on Ubuntu 14.04 with ROS Indigo
* Open CV, PCL, Arduino IDE, Visual Python,robot_localization,pose_ekf,
* Follow .gitignore or use ros workspace 
* Branch to the test branch for the repo. Download and run.
* The bash sources a static IP address and MASTER URI. Then the remote machine tunnels in via "ssh -X odroid@192.168.1.2".
* Run "roscore" on the tunneled device an then the other packages you want to run. Then in a new terminal on the local machine run the output you would like to display e.g."rosrun rviz rviz"

#Source your bash on remote machine/Master
* In order to work in an network environment, ROS also requires three more variable for master computer/device:
source /opt/ros/hydro/setup.bash
export ROS_MASTER_URI="http://192.168.1.2:11311"
export ROS_HOSTNAME="192.168.1.2"
export ROS_IP="192.168.1.2"
echo "ROS_MASTER_URI --> $ROS_MASTER_URI"
echo "MASTER IP --> $ROS_IP"

#Local machine add this export command to your bash 
source ~/.bashrc
export ROS_MASTER_URI="http://192.168.1.2:11311"

### Contribution guidelines ###

* Writing tests
* Directory structure
-CMAKE or catkin build systems
- Google (c++ style guide]: [http://google-styleguide.googlecode.com/svn/trunk/cppguide.xml]
- Write code for standard, high-performance c++ on modern processors(avoid embedded c hacks)
-Don't use tabs
- Indent with 2 spaces
- Configure your editor (Eclipse, NetBeans, Gedit,...)
* Other guidelines


###Tutorial of packages
* catkin_init_workspace
– Initialize a catkin workspace http://wiki.ros.org/catkin/Tutorials/create_a_workspace
* catkin_create_pkg
– Creates new ROS package http://wiki.ros.org/ROS/Tutorials/catkin/CreatingPackage
* catkin_make
– Compile catkin workspace or package http://wiki.ros.org/catkin/commands/catkin_make
* rospack
– Search for packages, display package info http://wiki.ros.org/rospack
* roscd
– Change directory into a ROS package


### Who do I talk to? ###

* Spottybadrabbit (cyril.lutterodt@mavs.utae.edu)
* Other community or team contact