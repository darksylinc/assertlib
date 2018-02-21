
#include <stdint.h>
#include <stdio.h>

#include "pow2assert.h"

#undef NDEBUG
#include<assert.h>

int main( int argc, char* argv[] )
{
    POW2_ASSERT( argc && "This is an error" );
    POW2_STATIC_ASSERT( 1 );
    POW2_ASSERT_MSG( 0, "Hello %s", " assert world" );
    return 0;
}
