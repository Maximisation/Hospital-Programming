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

Vect<std::string> operator*(Vect<std::string> & v1, double l){
    std::vector<std::string> o;
    for(int i=0;i<v1.n;i++){
        std::string k="";
        for (int j=0;j<l;j++){k+=v1.a[i];}
        o.push_back(k);
    }
    return {o,v1.n};
}

Vect<std::string> operator+(Vect<std::string>& v1, Vect<std::string>& v2){
    std::vector<std::string> o;
    for(int i=0;i<v1.n;i++){
        o.push_back(v1.a[i]+v2.a[i]);
    }
    return {o,v1.n};
}

std::ostream& operator<<(std::ostream& ostr,
                         const Vect<std::string>& v) {
    ostr << "[";
    for(auto i = 0u; i < v.a.size(); i++) {
        ostr << v.a[i];
        if (i != v.a.size()-1) ostr << ", ";
    }
    ostr << "]";
    return ostr;
}

std::istream& operator>>(std::istream& in, Vect<std::string>& v) {
    int d;
    std::cout << "Enter the dimension"<<std::endl;
    std::cin >>d;
    v.n=d;
    std::cout << "Input vector coordinates"<<std::endl;
    std::string k;
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
    std::cout << v+h;
}