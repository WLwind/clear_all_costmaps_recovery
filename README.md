# clear_all_costmaps_recovery
A ROS plugin of recovery_behaviors.  
This plugin can clear all costmaps and leave a clear static map on the ground when the planner cannot find an available trajectory to the goal. This makes it easy for the robot to find a clear path, however there is a probably risk which could make the robot hit the obstacles close to it. This plugin is recommended to the robots equipped with depth cameras or lidars with short blind spot.
