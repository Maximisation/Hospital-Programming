//
// Created by Maksim on 23.09.2021.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

auto calculate(double x1, double y1, int k1, std::vector<std::function<double(double, double)>> a){
    return a[k1](x1,y1);
}



int main(){
    long double x,y;
    std::string k;
    std::vector<std::string> v = {"+","-","*","/","pow"};
    std::vector<std::function<double(double, double)>> a ={[](double x, double y){return x + y ;}, [](double x, double y){return x - y ;}, [](double x, double y){return x * y ;},
[](double x, double y){return x / y ;}, [](double x, double y){return pow(x,y);}};
    std::cout << "Input x and y (x y) " << std::endl;
    std::cin >> x >> y;
    std::cout << "This sad program can work with only +,-,*,/,pow.  Input one of those for it to work"<<std::endl;
    std::cin >> k;
    int i;
    for (i=0;i<5;i++){
        if (v[i]==k){
            break;
        }
    }
    std::cout << calculate(x, y, i, a);
}