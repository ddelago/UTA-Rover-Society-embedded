#!/usr/bin/env python
import rospy
import serial
ser = serial.Serial('/dev/ttyACM1')
ser.baudrate = 9600
from geometry_msgs.msg import Twist

#Maybe add Global String For Serial? Have Functions add to string then write after all functions finish?
def Drive(msg):

	linear = round(100*(msg.linear.x))
	angular = round(100*(msg.angular.z))
	if(linear >= 0):
		linear_out = "+" + str(linear)
	elif(linear < 0):
		linear_out = "-" + str(linear)

	if(angular >= 0):
		angular_out = "+" + str(angular)
	elif(angular < 0):
		angular_out = "-" + str(angular)

	output = "D" + linear_out + "," + angular_out
	ser.write(output.encode())

def listener():

    rospy.init_node('rosToArduino')
    rospy.Subscriber("cmd_vel", Twist, Drive)	
    #rospy.Subsciber("Topic", Type, FunctionCall)	#Add more subscribers for topics needed
    #ser.write(GlobalString)
    #GlobalString="" Reset the string
    rospy.spin()

if __name__ == '__main__':
    listener()
