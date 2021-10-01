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

Vect operator*(Vect& v1, double l){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]*l);
    }
    return {o,v1.n};
}

Vect operator+(Vect& v1, Vect& v2){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]+v2.a[i]);
    }
    return {o,v1.n};
}

Vect operator-(Vect& v1){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(-v1.a[i]);
    }
    return {o,v1.n};
}

Vect operator-(Vect& v1, Vect& v2){
    std::vector<double> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]-v2.a[i]);
    }
    return {o,v1.n};
}


double operator*(Vect& v1, Vect& v2){
    double sum=0;
    for(int i=0;i<v1.n;i++){
        sum+=v1.a[i]*v2.a[i];
    }
    return sum;
}

std::ostream& operator<<(std::ostream& ostr,
                         const Vect& v) {
    ostr << "[";
    for(auto i = 0u; i < v.a.size(); i++) {
        ostr << v.a[i];
        if (i != v.a.size()-1) ostr << ", ";
    }
    ostr << "]";
    return ostr;
}

std::istream& operator>>(std::istream& in, Vect& v) {
    int d;
    std::cout << "Enter the dimension"<<std::endl;
    std::cin >>d;
    v.n=d;
    std::cout << "Input vector coordinates"<<std::endl;
    double k;
    for(int i=0;i<v.n;i++) {
        in >> k ;
        v.a.push_back(k);
    }
    return in;
}

int main(){
    Vect v;
    std::cin >> v;
    std::cout << v;
}