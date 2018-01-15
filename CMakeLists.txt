cmake_minimum_required(VERSION 3.9)
project(WorkFlowProj)
set(CMAKE_C_STANDARD 99)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")
set(CMAKE_EXE_LINKER_FLAGS "-s") #移除无用标记，减少exe体积

aux_source_directory(. DIR_SRCS)
add_subdirectory(units)
add_subdirectory(workflow)
add_executable(${CMAKE_PROJECT_NAME} ${DIR_SRCS})
target_link_libraries(${CMAKE_PROJECT_NAME} libUNITS_TEST)
target_link_libraries(${CMAKE_PROJECT_NAME} libWORKFLOW)