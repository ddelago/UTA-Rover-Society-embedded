#!/usr/bin/env python
import rospy
import serial
import time
ser = serial.Serial('/dev/ttyACM0')
ser.baudrate = 9600
from geometry_msgs.msg import Twist

#Maybe add Global String For Serial? Have Functions add to string then write after all functions finish?
def Drive(msg):
	
	linear = round(100*(msg.linear.x))
	angular = round(100*(msg.angular.z))
	int_linear = int(float(linear))
	int_angular = int(float(angular))

	if(int_linear >= 0):
		int_linear = "+" + str(int_linear)
	elif(int_linear < 0):
		int_linear = str(int_linear)

	if(int_angular >= 0):
		int_angular = "+" + str(int_angular)
	elif(int_angular < 0):
		int_angular = str(int_angular)
	
	if(len(int_linear)==3):
		int_linear = int_linear[0] + '0' + int_linear[1:]
	if(len(int_angular)==3):
		int_angular = int_angular[0] + '0' + int_angular[1:]
	if(len(int_linear)==2):
		int_linear = int_linear[0] + '00' + int_linear[1:]
	if(len(int_angular)==2):
		int_angular = int_angular[0] + '00' + int_angular[1:]
	output = "D" + int_linear + "," + int_angular
	ser.write(output.encode())

def status_check(event):
    ser.write('C')


def listener():
    rospy.init_node('rosToArduino')
    rospy.Subscriber("cmd_vel", Twist, Drive)
    rospy.Timer(rospy.Duration(.75), status_check)
    #rospy.Subsciber("Topic", Type, FunctionCall)	

    rospy.spin()

if __name__ == '__main__':
    listener()