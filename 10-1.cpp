#include <iostream>

auto f = [](auto x){std::cout <<x<<std::endl;};
template<typename F,typename T,typename... Types>
void test(F f,T first, Types... x){
    f(first);
    if constexpr(sizeof...(x)>0){test(f,x...);}
}

int main(){
    test(f,3,5,2);
}