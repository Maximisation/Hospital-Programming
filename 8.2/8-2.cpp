//
// Created by Maksim on 05.11.2021.
//
#include <iostream>
#include "date.h"


int main(){
    int a1,a2,a3,b1,b2,b3;
    std::cout << "Please input 2 dates in 2 rows (day month year)" << std::endl;
    std::cin>>a1>>a2>>a3;
    std::cin>>b1>>b2>>b3;
    try{
        Date a(a1,a2,a3);
        Date b(b1,b2,b3);
        std::cout << "First Date: "<<a<<"  Second Date: "<<b<<std::endl;
    } catch(std::exception& ex){
        std::cout <<ex.what()<<std::endl;
    }
}
