cmake_minimum_required(VERSION 3.10)

project(
  hello_world 
  VERSION 1.0
  LANGUAGES CXX)

add_library(random_vector random_vector.cpp random_vector.h)
add_executable(main main.cpp)
target_link_libraries(main PRIVATE random_vector)