# Premake example

This is a simple Hello World project illustrating the power of premake.
Generates Makefiles - Debug and Release configuration for the following
small project.

Files:
    -src/Message.cpp
    -src/main.cpp
    -h/Message.h
    ./premake5.lua
    ./premake5(executable - linux)

Download premake:
https://premake.github.io/download.html

premake5 gmake
$ make                # build default (Debug) configuration
$ make config=release # build release configuration
$ make help           # show available configurations
$ make clean config=release

For more information see:
https://github.com/premake/premake-core/wiki/Your-First-Script
