#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "../src/mycalc.h"

TEST_CASE("Testing MLT Function") {
    CHECK(mlt_two(10.0,5.0) == 50);
    CHECK(mlt_two(10.0,-5.0) == -50);
}
TEST_CASE("Testing DIV Function") {
    CHECK(div_two(10.0,5.0) == 2);
    CHECK(div_two(5.0,10.0) == 0.2);
    CHECK(div_two(5.0,0.0) == 0);
}

int main(int argc, char **argv)
{
doctest::Context context;

context.setOption("success", true);//Prints the SUCCESSFUL assertions.          

context.applyCommandLine(argc, argv);
return context.run();
}