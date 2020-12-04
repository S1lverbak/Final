#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <string>
#include <iomanip>
#include <cstdlib>
int countChar(string text){
    return text.length();
}

TEST_CASE( "characters are computed and tested", "[chars]" ) {
    //Setup
    string a("a");
    string b("ab");
    string c("a b");

   
    //Perform operation
    // a = "a";
    // b = "ab";
    // c = "a b";
    int d, e, f;
    d = countChar(a);
    e = countChar(e);
    f = countChar(f);
    //Test
    REQUIRE(d == 1);
    REQUIRE(e == 2);
    REQUIRE(f == 3);


}