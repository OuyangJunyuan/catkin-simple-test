cmake_minimum_required(VERSION 2.8.3)
project(catkin_simple_test)

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

cs_add_executable(catkin_simple_test_node src/main.cpp)

cs_install()
cs_export()