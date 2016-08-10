/* 
 * Daniel Delago   11/25/2015 
 * Description: Creates node "controller" that takes values from the controller 
 * and publishes the edited values to multiple topics.
 * 
 * Node: controller
 * Subscriptions: controller_raw
 * Publishing Topics: cmd_vel
*/
#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>
#include <sensor_msgs/Joy.h>
#include <std_msgs/Float32MultiArray.h>
#include <geometry_msgs/Twist.h>

class Controls
{   
    public: Controls();
    private:void CallBack(const sensor_msgs::Joy::ConstPtr& joy);		
	    void Drive(const sensor_msgs::Joy::ConstPtr& joy);				//Add more functions as needed 
    ros::NodeHandle n;
    ros::Subscriber controller_sub;
    ros::Publisher Joy2Turtlesim_pub, Drive_pub; 					    //Add more publishers as needed
    
    
};

Controls::Controls()
{      
    controller_sub 	= n.subscribe("controller_raw",1, &Controls::CallBack, this); 	//Queue size of 1
    //Joy2Turtlesim_pub = n.advertise<geometry_msgs::Twist>("turtle1/cmd_vel",100);	//Drive Testing
    Drive_pub 	= n.advertise<geometry_msgs::Twist>("cmd_vel",1);			        //Queue size of 1
    //Val_pub  	= n.advertise<std_msgs::Float32MultiArray>("cmd_vel",100);		    //Publish Values into Array
}

//CallBack Function
void Controls::CallBack(const sensor_msgs::Joy::ConstPtr& joy)				//Add all function calls in here
{
    Controls::Drive(joy);
}

//Controller Functions
void Controls::Drive(const sensor_msgs::Joy::ConstPtr& joy)				    //Inputs are -1.0 to 1.0	
{
    float x_axis = -1.0 * (joy->axes[0]);	//Left Stick
    int x = joy->buttons[1];			    //X Button
    float forward = (joy->axes[4]);		    //Right Trigger R2
    float reverse = (joy->axes[3]);		    //Left Trigger L2
    float Drive; 
    forward = -1.0*((forward-1.0)/2.0);		//Converts values  
    reverse = (reverse-1.0)/2.0; 	    	//Converts values
    Drive = forward + reverse;		    	//Combines Forward and Revers Values for net Drive Speed and Direction
    
    geometry_msgs::Twist msg;			    //Publish Values as Twist Message: Linear and Angular with xyz Values				
    msg.linear.x=(Drive);
    msg.angular.z=(x_axis);
    Drive_pub.publish(msg);
    
    /*std_msgs::Float32MultiArray msg;  	//Publish Values to an Array
    msg.data.push_back(Drive);
    msg.data.push_back(x_axis);
    msg.data.push_back(x);
    Val_pub.publish(msg);
    */
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "controller");  	//Create node named "controller"
    Controls controls;   

    ros::Rate loop_rate(2.5);			    //Publishes x times per second
    while(ros::ok()){
        ros::spinOnce();
        loop_rate.sleep();
    }
}


