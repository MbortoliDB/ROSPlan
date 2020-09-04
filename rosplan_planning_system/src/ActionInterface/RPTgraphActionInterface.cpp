#include "rosplan_action_interface/RPTgraphActionInterface.h"

/* The implementation of RPTutorial.h */
namespace KCL_rosplan {

	/* constructor */
	RPTgraphActionInterface::RPTgraphActionInterface(ros::NodeHandle &nh) {
		// perform setup
		
	}

	/* action dispatch callback */
	bool RPTgraphActionInterface::concreteCallback(const rosplan_dispatch_msgs::ActionDispatch::ConstPtr& msg) {

		// The action implementation goes here.

		if (msg->name == "move")
		{
			ros::Duration(4.9).sleep();

			// complete the action
			ROS_INFO("KCL: (%s) TUTORIAL Action completing.", msg->name.c_str());
			return true;
		
		}
		

		if (msg->name == "putoff")
		{
			ros::Duration(14.9).sleep();

			// complete the action
			ROS_INFO("KCL: (%s) TUTORIAL Action completing.", msg->name.c_str());
			return true;
		
		}

		if (msg->name == "puton")
		{
			ros::Duration(14.9).sleep();

			// complete the action
			ROS_INFO("KCL: (%s) TUTORIAL Action completing.", msg->name.c_str());
			return true;
		
		}
	}
} // close namespace

	/*-------------*/
	/* Main method */
	/*-------------*/

	int main(int argc, char **argv) {

		ros::init(argc, argv, "rosplan_tutorial_action", ros::init_options::AnonymousName);
		ros::NodeHandle nh("~");

		// create PDDL action subscriber
		KCL_rosplan::RPTgraphActionInterface rpti(nh);

		rpti.runActionInterface();

		return 0;
	}
