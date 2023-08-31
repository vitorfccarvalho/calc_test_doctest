#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "../src/mycalc.h"

TEST_CASE("Testing SUB Function") {
    CHECK(sub_two(10.0,5.0) == 5);
    CHECK(sub_two(5.0,10.0) == -5);
}

int main(int argc, char **argv)
{
doctest::Context context;

context.setOption("success", true);//Prints the SUCCESSFUL assertions.          

context.applyCommandLine(argc, argv);
return context.run();
}