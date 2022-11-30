#include <iostream>
#include "funcs.h"

int main(){
    std::cout << "Task A" << std::endl;
    std::cout << "makeVector(3): "<< std::endl;
    print(makeVector(3));
    std::cout << std::endl;

    std::cout << "Task B" << std::endl;
    std::cout << "goodVibes({1, -1, -3, 0, -4, 2}): " << std::endl;
    print(goodVibes({1, -1, -3, 0, -4, 2}));
    std::cout << std::endl;

    std::cout << "Task C" << std::endl;
    std::cout << "std::vector<int> test1{0}" << std::endl << "std::vector<int> test2{1}" << std::endl;
    std::vector<int> test1{0};
    std::vector<int> test2{1};
    std::cout << "gogeta(test1, test2): " << std::endl;
    gogeta(test1, test2);
    std::cout << "test1: " << std::endl;
    print(test1);
    std::cout << "test2: " << std::endl;
    print(test2);
    std::cout << std::endl;

    std::cout << "Task D" << std::endl;
    std::cout << "sumPairWise({3, 2, 6}, {1, 3}): " << std::endl;
    print(sumPairWise({3, 2, 6}, {1, 3}));

    return 0;
}