#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A"){
    std::vector<int> test{0,1,2};
    CHECK(makeVector(3) == test);
    test = {0};
    CHECK(makeVector(1) == test);
    test = {};
    CHECK(makeVector(-1) == test);
}

TEST_CASE("Task B"){
    std::vector<int> test{1, 0, 2};
    CHECK(goodVibes({1, 0, 2}) == test);
    CHECK(goodVibes({1, -1, -3, 0, -4, 2}) == test);
    test = {};
    CHECK(goodVibes({-1, -2, -3, -4}) == test);
}

TEST_CASE("Task C"){
    std::vector<int> test1{0};
    std::vector<int> test2{1};
    std::vector<int> newTest1{0, 1};
    std::vector<int> newTest2{};
    gogeta(test1, test2);
    CHECK(test1 == newTest1);
    CHECK(test2 == newTest2);
    test1 = {};
    test2 = {1, 0, -3};
    newTest1 = test2;
    gogeta(test1, test2);
    CHECK(test1 == newTest1);
    CHECK(test2 == newTest2);
}

TEST_CASE("Task D"){
    std::vector<int>test;
    CHECK(sumPairWise({}, {}) == test);
    test = {1, 2, 3};
    CHECK(sumPairWise({}, {1, 2, 3}) == test);
    test = {2, -1, 0};
    CHECK(sumPairWise({1, 0, -2}, {1, -1, 2}) == test);
    test = {4, 5, 6};
    CHECK(sumPairWise({1, 3}, {3, 2, 6}) == test);
    CHECK(sumPairWise({3, 2, 6}, {1, 3}) == test);
}