//
// Created by Maksim on 17.09.2021.
//
#include <iostream>
#include <vector>

int main(){
    int t;
    std::vector<int> v,tt;
    std::cout << "Input the vector (x y z): " <<std::endl;
    for (int i=0; i<3 ;i++){
        std::cin >>t;
        v.push_back(t);
    }
    std::vector<std::vector<int> > ten;
    std::cout << "Input the tenzor value (first row then second row and ect.)" <<std::endl;
    for(int i=0; i<3; i++) {
        ten.push_back(tt);
        for (int j = 0; j < 3; j++) {
            std::cin >> t;
            ten[i].push_back(t);
        }
    }
    int sum;
    for(int j=0; j<3;j++){
        sum=0;
        for(int i=0;i<3;i++){
            sum +=v[i]*ten[j][i];
        }
        std::cout << sum << "  ";
    }
}
