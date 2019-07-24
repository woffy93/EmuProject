cmake_minimum_required(VERSION 3.7)

project(EmuProject)

#enable c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL2 REQUIRED)
find_package(spdlog REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(EmuGB src/main.cpp src/MainWindow.cpp)
target_link_libraries(EmuGB PUBLIC ${SDL2_LIBRARIES})
target_link_libraries(EmuGB PRIVATE spdlog::spdlog)
target_compile_options(EmuGB PRIVATE -Wall -Wextra -Wconversion -pedantic -Wfatal-errors)