#!/bin/bash
oldCC=$CC
oldCXX=$CXX

# Set the compiler to clang
export CC=/usr/bin/clang
export CXX=/usr/bin/clang++

# rebuilding
rebuild="$1"

# Run the cleaner and then build to make sure its fresh
clear
if [ -z "$rebuild" ]; then
    sh cleaner.sh
fi

# Go into Valkyrie and update
cd TicTacToe/Valkyrie
git init
git checkout .
git pull
cd ../../

# Go into NordicOS and update
cd TicTacToe/NordicOS
git init
git checkout .
git pull
cd ../../

# Build
cmake .
make

# Set Compiler Back
export CC=$CC
export CXX=$CXX

# Cleanup the mess
if [ -z "$rebuild" ]; then
    rm -rf `find . -type d -name CMakeFiles`
    rm -rf `find . -type d -name build`
    rm -rf `find . -type f -name CMakeCache.txt`
    rm -rf `find . -type f -name Makefile`
    rm -rf `find . -type f -name cmake_install.cmake`
fi

# Run the app to make sure its stable
cd Build
cp -r ../GameFiles .
./TicTacToe.app
