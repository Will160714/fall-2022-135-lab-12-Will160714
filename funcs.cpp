#include "funcs.h"
#include <iostream>

void print(std::vector<int> v){
    std::cout << "{";
    for(int x = 0; x < v.size(); x++){
        if(x < v.size() - 1)
            std::cout << v[x] << ", ";
        else
            std::cout << v[x];
    }
    std::cout << "}" << std::endl;
}
std::vector<int> makeVector(int n){
    std::vector <int> v;
    for(int x = 0; x < n; x++){
        v.push_back(x);
    }
    return v;
}

std::vector<int> goodVibes(const std::vector<int> &v){
    std::vector <int> z;
    for(int x = 0; x < v.size(); x++){
        if(v[x] >= 0)
            z.push_back(v[x]);
    }
    return z;
}

void gogeta(std::vector<int> &goku, std::vector<int> &vegeta){
    for(int x = 0; x < vegeta.size(); x++){
        goku.push_back(vegeta[x]);
    }
    vegeta.clear();
}

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
    std::vector<int> sum;
    std::vector<int>v3 = v1;
    std::vector<int>v4 = v2;
    if(v1.size() > v2.size()){
        for(int x = v2.size(); x < v1.size(); x++)
            v4.push_back(0);
    }
    else if(v1.size() < v2.size()){
        for(int x = v1.size(); x < v2.size(); x++)
            v3.push_back(0);
    }

    for(int x = 0; x < v3.size(); x++){
        sum.push_back(v3[x] + v4[x]);
    }

    return sum;
}
