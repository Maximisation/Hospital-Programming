//
// Created by Maksim on 29.09.2021.
//
#include <iostream>
#include <vector>
#include <iomanip>
#include <bitset>

struct Vect{
    std::vector<double> a;
    int n;
};

Vect operator*(Vect v1, double l){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]*l);
    }
    return {o,v1.n};
}

Vect operator+(Vect v1, Vect v2){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]+v2.a[i]);
    }
    return {o,v1.n};
}

Vect operator-(Vect v1){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(-v1.a[i]);
    }
    return {o,v1.n};
}

Vect operator-(Vect v1, Vect v2){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]-v2.a[i]);
    }
    return {o,v1.n};
}


double operator*(Vect v1, Vect v2){
    double sum=0;
    for(int i=0;i<v1.n;i++){
        sum+=v1.a[i]*v2.a[i];
    }
    return sum;
}

void vvod(Vect& v){
    int d;
    std::vector<double> vec;
    std::cout << "Input the dimension: "<<std::endl;
    std::cin >>d;
    std::cout << "Input the vector coordinates "<<std::endl;
    for(int i=0;i<d;i++){
        double k;
        std::cin >>k;
        vec.push_back(k);
    }
    v={vec,d};
}

void vyvod(Vect v){
    for(int i=0;i<v.n;i++){
        std::cout << v.a[i] << " ";
    }
    std::cout<<""<<std::endl;
}

std::ostream& operator<<(std::ostream& ostr,
                         const std::vector<int>& nums) {
    ostr << "[";
    for(auto i = 0u; i < nums.size(); i++) {
        ostr << nums[i];
        if (i != nums.size() - 1) ostr << ", ";
    }
    ostr << "]";
    return ostr;
}

std::istream& operator>>(std::istream& in, std::vector<int>& v) {
    for(auto& elem: v) {
        std::cin >> elem;
    }
    return in;
}

int main(){
    Vect v,k;
    vvod(v);
    vvod(k);
    vyvod(v);
    vyvod(v*8);
    vyvod(v-k);
    vyvod(-v);
    vyvod(v+k);
    std::cout << v*k;
}