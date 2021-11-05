#define CATCH_CONFIG_MAIN
#include "../Catch2/catch.hpp"
#include "../main.cpp"
TEST_CASE("Unit tests") {
    REQUIRE(square(2) == 3);
}



