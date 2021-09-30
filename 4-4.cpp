//
// Created by Maksim on 30.09.2021.
//
#include <iostream>

enum class Month{
    Jan=1, Feb , Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
};

int main(){
    int s;
    std::cout << "Input the number of the month "<< std::endl;
    std::cin >>s;
    Month m;
    m = static_cast<Month>(s);
    std::cout << "Amount of days in this month is ";
    switch(m){
        case Month::Jan:
            std::cout << 31;
            break;
        case Month::Feb:
            std::cout << 28;
            break;
        case Month::Mar:
            std::cout << 31;
            break;
        case Month::Apr:
            std::cout << 30;
            break;
        case Month::May:
            std::cout << 31;
            break;
        case Month::Jun:
            std::cout << 30;
            break;
        case Month::Jul:
            std::cout << 31;
            break;
        case Month::Aug:
            std::cout << 31;
            break;
        case Month::Sep:
            std::cout << 30;
            break;
        case Month::Oct:
            std::cout << 31;
            break;
        case Month::Nov:
            std::cout << 30;
            break;
        case Month::Dec:
            std::cout << 31;
            break;
        default:
            std::cout << "There are 12 months! Not minus or 13 and more months goddamn it!";
    }
}