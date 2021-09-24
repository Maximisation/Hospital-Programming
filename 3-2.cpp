//
// Created by Maksim on 23.09.2021.
//

#include <iostream>
#include <vector>

auto vvod(std::vector<int>& s, int c){
    int k;
    for( int i=0 ; i<c ; i++){
        std::cin >>k;
        s.push_back(k);
    }
}

std::vector<int> toge(std::vector<int> l1, std::vector<int> l2){
    std::vector<int> t;
    int i1=0,i2=0;
    bool b1=true,b2=true;
    for (int i=0; i<l1.size()+l2.size();i++){
        if (((l1[i1] < l2[i2]) && b1)|| !b2){
            t.push_back(l1[i1]);
            if (i1==l1.size()-1){b1=false;}
            else{i1+=1;}
        }
        else if ((l1[i1]>=l2[i2] && b2) ||  !b1){
            t.push_back(l2[i2]);
            if (i2==l2.size()-1){b2=false;}
            else{i2+=1;}
        }
    }
    return t;
}

std::vector<int> sor(std::vector<int>& x){
    if (x.size()==1){return x;}
    else{
        std::vector<int> x1,x2;
        for(int i=0;i<x.size();i++){
            if (i < x.size()/2){ x1.push_back(x[i]);}
            else{x2.push_back(x[i]);}
        }
        x1=sor(x1);
        x2=sor(x2);
        return toge(x1,x2);
    }
}

int main(){
    std::vector<int> a;
    int x;
    std::cout << "Input the amount of numbers" << std::endl;
    std::cin >> x ;
    std::cout << "Input the vector"<<std::endl;
    vvod(a,x);
    std::vector<int> p= sor(a);
    for (int i:p){
        std::cout<< i <<" ";
    }

}