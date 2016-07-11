#include "catch.hpp"
#include "../src/main.cpp"

TEST_CASE( "main returns 0", "[main]" ) {
    REQUIRE( main() == 0 );
}
