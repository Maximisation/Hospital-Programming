//
// Created by Maksim on 14.11.2021.
//

#include <iostream>
#include <vector>
#include <bitset>

template <typename T>
struct Vect{
    std::vector<T> a;
    int n;
};

template <typename T>
Vect<T> operator*(Vect<T>& v1, double l){
    std::vector<T> o;
    for(int i=0;i<v1.n;i++){
        T k = v1.a[i];
        for (int j=1;j<l;j++){k+=v1.a[i];}
        o.push_back(k);
    }
    return {o,v1.n};
}

template <typename T>
Vect<T> operator+(Vect<T>& v1, Vect<T>& v2){
    std::vector<T> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]+v2.a[i]);
    }
    return {o,v1.n};
}

template <typename T>
std::ostream& operator<<(std::ostream& ostr,
                         const Vect<T>& v) {
    ostr << "[";
    for(auto i = 0u; i < v.a.size(); i++) {
        ostr << v.a[i];
        if (i != v.a.size()-1) ostr << ", ";
    }
    ostr << "]";
    return ostr;
}

template <typename T>
std::istream& operator>>(std::istream& in, Vect<T>& v) {
    int d;
    std::cout << "Enter the dimension"<<std::endl;
    std::cin >>d;
    v.n=d;
    std::cout << "Input vector coordinates"<<std::endl;
    T k;
    for(int i=0;i<v.n;i++) {
        in >> k ;
        v.a.push_back(k);
    }
    return in;
}

int main(){
    std::cout << "I have no idea how to interpret std::string - std::string, so only +,* (by integer) work "<<std::endl;
    Vect<std::string> v,h;
    std::cin >> v;
    std::cin >>h;
    std::cout << v+h<<std::endl;
    Vect<int> v1,h1;
    std::cin >>v1;
    std::cout <<v1*2;
}