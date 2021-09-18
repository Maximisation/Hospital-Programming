#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int k,n,T;
    std::cout << "Input the amount of numbers: "<<std::endl;
    std::cin >> n;
    std::cout << "Now input the numbers: "<<std::endl;
    for (int i=0;i<n;i++){
        std::cin >> k;
        v.push_back(k);
    }
    std::cout << "Now input the number you are searching for: " << std::endl;
    std::cin >> T;
    int m,d=0, p= v.size()-1;
    bool y=false;
    while (d!=p){
        m=(p+d)/2;
        if (v[m]<T){
            d=m+1;
        }
        else if (v[m]==T){
            y=true;
            break;
        }
        else{
            p=m;
        }
    }
    if (y) {
        std::cout << T << " is on position " << m << " of our sequence "<<std::endl;
    }else{
        std::cout << "There is no such number, or you screwed the sequence"<< std::endl;
    }
}
