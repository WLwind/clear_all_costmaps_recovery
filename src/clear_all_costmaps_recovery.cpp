#include <clear_all_costmaps_recovery/clear_all_costmaps_recovery.h>
#include <pluginlib/class_list_macros.h>

//register this planner as a RecoveryBehavior plugin
PLUGINLIB_EXPORT_CLASS(clear_all_costmaps_recovery::ClearAllCostmapsRecovery, nav_core::RecoveryBehavior)

using costmap_2d::NO_INFORMATION;

namespace clear_all_costmaps_recovery {
  ClearAllCostmapsRecovery::ClearAllCostmapsRecovery()
  {
    ROS_INFO("Constructing clear_all_costmaps_recovery plugin!");
  }

  void ClearAllCostmapsRecovery::initialize(std::string name, tf2_ros::Buffer* tf, costmap_2d::Costmap2DROS* global_costmap, costmap_2d::Costmap2DROS* local_costmap)
  {
    ROS_INFO("Initializing clear_all_costmaps_recovery plugin!");
  }

  void ClearAllCostmapsRecovery::runBehavior()
  {
    ROS_WARN("Running clear_all_costmaps_recovery plugin!");
    std_srvs::Empty cl_cm;
    if(clear_costmap.call(cl_cm))//call for clear costmap server
    {
        ROS_INFO("move_base:Costmaps have been cleared!");
    }
    else
    {
        ROS_WARN("move_base:Fail to clear costmaps!");
    }    
  }
};
