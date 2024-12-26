CMAKE_MINIMUM_REQUIRED(VERSION 3.1)

project(uvm-systemc-things)

SET(CMAKE_BUILD_TYPE "DEBUG")
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")

#include
INCLUDE_DIRECTORIES(/usr/local/systemc-2.3.1/include)   #根据自己安装的systemc路径更改
INCLUDE_DIRECTORIES(/usr/local/uvm-systemc/include)   #根据自己安装的uvm-systemc路径更改


#lib path
LINK_DIRECTORIES(/usr/local/systemc-2.3.1/lib-linux64)  #根据自己安装的systemc路径更改
LINK_DIRECTORIES(/usr/local/uvm-systemc/lib-linux64)  #根据自己安装的uvm-systemc路径更改

#exec
ADD_EXECUTABLE(demo ${PROJECT_SOURCE_DIR}/src/1.uvm_void.cpp)
TARGET_LINK_LIBRARIES(demo 
                    -Wl,--start-group                
                    systemc
                    uvm-systemc
                    -Wl,--end-group)
