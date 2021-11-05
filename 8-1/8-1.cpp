//
// Created by Maksim on 05.11.2021.
//

#include <iostream>
#include "KillMe2.h"
bool operator>(Jesus h1,Jesus h2){
    return (h1.a*h2.b>h1.b*h2.a);
}
bool operator>(Jesus h,int l){
    return (h.a>l*h.b);
}
bool operator>(int l,Jesus h){
    return (l*h.b>h.a);
}
bool operator<(Jesus h1,Jesus h2){
    return (h1.a*h2.b<h1.b*h2.a);
}
bool operator<(Jesus h,int l){
    return (h.a<l*h.b);
}
bool operator<(int l,Jesus h){
    return (l*h.b<h.a);
}

Jesus& Jesus::operator++() {
    a=a+b;
    return *this;
}
Jesus& Jesus::operator--() {
    a=a-b;
    return *this;
}
Jesus Jesus::operator++(int) {
    Jesus t(a,b);
    ++(*this);
    return t;
}
Jesus Jesus::operator--(int) {
    Jesus t(a,b);
    --(*this);
    return t;
}


int main() {
    std::cout<< "Input the numenator and denominator:"<<std::endl;
    int a,b;
    std::cin >> a >>b;
    Jesus h(a,b);
    std::cout << double (h);
}