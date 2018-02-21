#set( CMAKE_TOOLCHAIN_FILE CMake/iOS.cmake )

cmake_minimum_required( VERSION 3.0 )
project( AssertLib )

#set( CMAKE_CXX_STANDARD 11 )
set( EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}" )

include( CMake/Bootstrap.cmake )

set( SOURCES
    ./main.cpp
    ./pow2assert.cpp
    ./pow2assert.h
    ./debugbreak/debugbreak.h
)

add_executable( ${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SOURCES} )

