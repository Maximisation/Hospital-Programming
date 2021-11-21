
#include <iostream>

template<typename T, typename... Types>
int get_amount(T first_argument, Types... arguments) {
    int r = 0;
    for (int i = 0; i <= sizeof...(arguments) + 2; i++){
        r += sizeof(first_argument);
    }
    return r;
}

template <typename T,typename... Types>
auto sum(T first, Types... arguments) {
    auto result=sizeof(first);
    if constexpr(sizeof...(arguments)>0){ result +=sum(arguments...);}
    return result;
}


int main(){
    //int n = get_amount(3, 10.5, 4u, 33.5, 3);
    int m = sum(3, 10.5, 4u, 33.5,3);
    std::cout << m;
}