//
// Created by Maksim on 23.09.2021.
//
#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
    std::vector<int> s = {4,8,12,76,9,3,5};
    std::sort(s.begin(), s.end(), [](int a, int b) { return a > b; });
    for(int i:s){
        std::cout << i << " ";
    }
    std::cout <<""<<std::endl;
    std::sort(s.begin(), s.end(), [](int a, int b) {return a < b; });
    for(int i:s){
        std::cout << i << " ";
    }
}