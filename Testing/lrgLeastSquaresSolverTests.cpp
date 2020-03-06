#include "catch.hpp"
#include "lrgCatchMain.h"
#include <iostream>

TEST_CASE( "Simple add", "[MyFirstAddFunction]") {
  REQUIRE( lrg::LinearDatacreator(1, 2) == 3);
}

// somehow need to get it run this class, might be easier to do once it has a function?