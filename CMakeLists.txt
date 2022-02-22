CMAKE_MINIMUM_REQUIRED(VERSION 3.22.0)

PROJECT(demo)    # creat project

add_subdirectory(./src)

AUX_SOURCE_DIRECTORY(./ DIR_CPP)  # 将当前目录所有源文件存储在DIR_CPP变量中

ADD_EXECUTABLE(demo ${DIR_CPP})

target_link_libraries(demo mysrc)  # 为目标demo添加共享库

