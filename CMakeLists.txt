# CMake Version
cmake_minimum_required(VERSION 2.8)

# Project Name
project(TicTacToe)

# C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11 -m64")

# Output Dir
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/Build)

# Apple Boost
if (APPLE)
    link_directories(/usr/local/include)
    include_directories(/usr/local/include)
endif()

# Standard Include
include_directories(${PROJECT_SOURCE_DIR}/TicTacToe)

# Set Source
set(Tic ${PROJECT_SOURCE_DIR}/TicTacToe)
set(GameHeaders ${Tic}/Main.hpp)
set(GameSources ${Tic}/Main.cpp)

# Standard Includes
list(APPEND GameHeaders ${Tic}/Includes.hpp)

# Boost
find_package(Boost COMPONENTS locale REQUIRED)
include_directories(${Boost_INCLUDES})

# NordicOS
add_subdirectory(${Tic}/NordicOS)
link_directories(${Tic}/NordicOS)
include_directories(${Tic}/NordicOS)

# Valkyrie
add_subdirectory(${Tic}/Valkyrie)
link_directories(${Tic}/Valkyrie)
include_directories(${Tic}/Valkyrie)

# Compile
add_executable(TicTacToe ${GameSources} ${GameHeaders})
set_target_properties(TicTacToe PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(TicTacToe PROPERTIES OUTPUT_NAME "TicTacToe.app")

# Link
target_link_libraries(TicTacToe NordicOS Valkyrie)
target_link_libraries(TicTacToe ${Boost_LIBRARIES})
