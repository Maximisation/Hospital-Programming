
#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int k,n;
    std::cout << "Input the amount of numbers: "<<std::endl;
    std::cin >> n;
    std::cout << "Now input the numbers: "<<std::endl;
    for (int i=0;i<n;i++){
        std::cin >> k;
        v.push_back(k);
    }
    for( int i=1 ; i<v.size() ; i++){
        for (int j=i; j>0 && v[j-1]>v[j]; j--){
            std::swap(v[j],v[j-1]);
        }
    }
    for(auto t:v){
        std::cout <<t <<" ";
    }
}
