#include<ros/ros.h>
#include<std_msgs/Float32.h>
#include<geometry_msgs/Twist.h>

ros::Publisher twist_pub;

void Callback_front(const){
    
}

void Callback_right(){
    
}

void Callback_left(){
    
}

int main(int argc, char **argv){
    
    //std_msgs::Float32 msg;    
    ros::init(argc, argv, "simple_avoidance");
    
    ros::NodeHandle node; 
    
    ros::Subscriber sonar_front = node.subscribe("vrep/vehicle/frontSonar", 1, Callback_front);  // pegando os dados do sensor
    ros::Subscriber sonar_right = node.subscribe("vrep/vehicle/frontSonar", 1, fcnCallback_right);
    ros::Subscriber sonar_left = node.subscribe("vrep/vehicle/frontSonar", 1, fcnCallback_left);
    
    twist_pub = node.advertise<geometry_msgs::Twist>("obstacle/twist", 1);    //topic name  , declaração do publicador
    
    ros::spin();
    
    return 0;
    
}