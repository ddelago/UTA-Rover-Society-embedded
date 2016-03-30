#!/usr/bin/env python
import rospy
import serial
ser = serial.Serial('/dev/ttyACM0')
ser.baudrate = 9600
from geometry_msgs.msg import Twist

#Maybe add Global String For Serial? Have Functions add to string then write after all functions finish?
def Drive(msg):

    linear = int(round(100*("%+.3f" % msg.linear.x)))
    angular = int(round(100*("%+.3f" % msg.angular.z)))
    output = "D" + linear + "," + angular   
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
