//
// Created by Maksim on 30.09.2021.
//
#include <iostream>
#include <vector>
struct Date{
    unsigned nMilS : 10;
    unsigned nS : 6;
    unsigned nMin : 6;
    unsigned nH : 5;
    unsigned nD : 6;
    unsigned nM : 4;
    unsigned nY : 11;
};

void vvod(Date& t1, unsigned a1,unsigned a2,unsigned a3,unsigned a4,unsigned a5,unsigned a6,unsigned a7){
    t1.nY=a1;
    t1.nM=a2;
    t1.nD=a3;
    t1.nH=a4;
    t1.nMin=a5;
    t1.nS=a6;
    t1.nMilS=a7;
}

void vyvod(Date t1){
    std::cout << "The date is: " << t1.nD <<"."<<t1.nM<<"."<<t1.nY<< " ; "<<t1.nH<<":"<<t1.nMin<<":"<<t1.nS<<":"<<t1.nMilS<<std::endl;
}

int main(){
    std::vector<unsigned> w;
    std::cout << "Input Year, Month, Day, Hour, Minute, Second and Millisecond (Only before year 2048, and not before the birth of Jesus)" << std::endl;
    for (int i=0;i<7;i++){
        unsigned r;
        std::cin >> r;
        w.push_back(r);
    }
    Date t;
    vvod(t,w[0],w[1],w[2],w[3],w[4],w[5],w[6]);
    vyvod(t);
}