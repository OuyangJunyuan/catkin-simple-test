//
// Created by ou on 2021/1/15.
//


#include "ros/ros.h"
#include "std_msgs/String.h"
#include <main.h>
#include <sstream>
int main(int argc, char **argv)
{
    print_hellow_world(); ros::init(argc, argv, "talker");
    ros::NodeHandle n("talker");
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);
    ros::Rate loop_rate(10);
    std_msgs::String msg;
    while (ros::ok()){
        std::stringstream ss;
        ss<<"talking";
        msg.data = ss.str();
        ROS_INFO("%s", msg.data.c_str());
        chatter_pub.publish(msg);
        ros::spinOnce();
        ros::Rate loop_rate(10);
        loop_rate.sleep();
    }
    return 0;
}