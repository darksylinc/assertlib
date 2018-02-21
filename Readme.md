# AssertLib

This is a C++ library for using a custom assert that is robust, flexible and useful.

This assert implementation was originally written by Charles Nicholson when he founded the now-defunct Power of Two Games.

For more information about this implementation visit see [Stupid C++ Tricks: Adventures in Assert](http://cnicholson.net/2009/02/stupid-c-tricks-adventures-in-assert/)

I extended compiler support to multiple platforms and added a few more tweaks.

# Requirements
* Any C++ compiler (not C) with #pragma support.
* If C++11 support is detected, static_assert will be used. Otherwise a compiler trick will be used instead.

# How to add it to your project
You'll find a Python script that generates the assert code for your project.

For example if your project is named "MyProject" then run:

    cd Generator
    python3 generate.py MyProject

This will generate two files called MyProjectAssert.h and MyProjectAssert.cpp

You'll need to copy those two files to your project and also copy debugbreak/debugbreak.h

# How to use it

    #include "MyProjectAssert.h"
    MYPROJECT_ASSERT( condition && "Some text message" );
    MYPROJECT_STATIC_ASSERT( static_condition && "Some text message" );
    MYPROJECT_ASSERT_MSG( condition, "Some printf-like message %i", myInt );

Undefine MYPROJECT_ASSERTS_ENABLED to disable the asserts.

# Why is there a CMake script there?
It's just to test that it works, using the original pow2 prefix.

# LICENSE
The python script is under BSD-3-Clause (the script itself, not the templates)

The modifications made by me are under BSD-3-Clause, Copyright (c) 2018, Matias N. Goldberg

The original code is under BSD-3-Clause, Copyright (c) 2008, Power of Two Games LLC. You can find the original code at http://cnicholson.net/2009/02/stupid-c-tricks-adventures-in-assert/

This code uses debug_break written by Scott Tsai under BSD-2-Clause, Copyright (c) 2011-2016, Scott Tsai. You can find its repo at https://github.com/scottt/debugbreak
