#include <iostream>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int theAnswer() { return 42; }

TEST_CASE( "Life, the universe and everything", "[42][theAnswer]" ) {
    REQUIRE( theAnswer() == 42 );
}


//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0fakeit.hppfakeit.hpp;
//}