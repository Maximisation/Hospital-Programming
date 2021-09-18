//
// Created by Maksim on 17.09.2021.
//
#include <iostream>
#include <vector>

int main(){
    int t;
    std::vector<int> v;
    std::cout << "Input the vector (x y z): " <<std::endl;
    for (int i=0; i<3 ;i++){
        std::cin >>t;
        v.push_back(t);
    }
    std::vector<int> ten;
    std::cout << "Input the tenzor value (first row then second row and ect.)" <<std::endl;
    for(int i=0; i<9; i++){
        std::cin >>t;
        ten.push_back(t);
    }
    int sum;
    for(int j=0; j<3;j++){
        sum=0;
        for(int i=0;i<3;i++){
            sum +=v[i]*ten[j*3+i];
        }
        std::cout << sum << "  ";
    }
}
