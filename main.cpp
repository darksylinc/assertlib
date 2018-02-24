
#include <stdio.h>

#include "pow2assert.h"

#include <assert.h>

#if _WIN32

#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN
#include <Windows.h>

INT WINAPI WinMain( HINSTANCE hInst, HINSTANCE hInst2, LPSTR strCmdLine, INT /*intParam*/ argc )
#else
int main( int argc, const char *argv[] )
#endif
{
    POW2_ASSERT( 0 && "This is an error" );
    POW2_STATIC_ASSERT( 1 );
    POW2_ASSERT_MSG( 0, "Hello %s", " assert world" );
    return 0;
}
