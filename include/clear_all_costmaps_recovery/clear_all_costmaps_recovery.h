#pragma once

#include <nav_core/recovery_behavior.h>
#include <costmap_2d/costmap_2d_ros.h>
#include <ros/ros.h>
#include <costmap_2d/costmap_layer.h>
#include <std_srvs/Empty.h>//clear costmap service

namespace clear_all_costmaps_recovery{
/**
  * @class ClearAllCostmapRecovery
  * @brief A recovery behavior that clear all obstacles in the costmap.
  */
class ClearAllCostmapsRecovery : public nav_core::RecoveryBehavior
{
public:
    /**
      * @brief  Constructor, make sure to call initialize in addition to actually initialize the object
      */
    ClearAllCostmapsRecovery();
    /**
      * @brief  Initialization function for the ClearCostmapRecovery recovery behavior
      * @param tf A pointer to a transform listener
      * @param global_costmap A pointer to the global_costmap used by the navigation stack
      * @param local_costmap A pointer to the local_costmap used by the navigation stack
      */
    void initialize(std::string name, tf::TransformListener* tf, costmap_2d::Costmap2DROS* global_costmap, costmap_2d::Costmap2DROS* local_costmap) override;
    /**
      * @brief  Run the ClearCostmapRecovery recovery behavior.
      */
    void runBehavior() override;

private:
    ros::NodeHandle nh;
    ros::ServiceClient clear_costmap{nh.serviceClient<std_srvs::Empty>("/move_base_node/clear_costmaps")};//clear costmap client
};
}//end namespace
