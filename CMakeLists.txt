cmake_minimum_required(VERSION 2.8.3)
project(clear_all_costmaps_recovery)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  cmake_modules
  costmap_2d
  nav_core
  pluginlib
  roscpp
  tf2_ros
  std_srvs
)

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if your package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES clear_all_costmaps_recovery
#  CATKIN_DEPENDS cmake_modules costmap_2d nav_core pluginlib roscpp tf2_ros std_srvs
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  include ${catkin_INCLUDE_DIRS}
# include
  ${catkin_INCLUDE_DIRS}
)

add_library(clear_all_costmaps_recovery
  src/clear_all_costmaps_recovery.cpp
)
add_dependencies(clear_all_costmaps_recovery ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(clear_all_costmaps_recovery
  ${catkin_LIBRARIES}
)
