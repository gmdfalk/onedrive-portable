#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/main.cpp"

TEST_CASE( "Hello returns 0", "[main]" ) {
    REQUIRE( Main() == 0 );
}
