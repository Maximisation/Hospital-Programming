#include <iostream>

int fib(int i){
    if ((i == 1) || (i == 2)){
        return 1;
    }
    else{
        return fib(i-1)+fib(i-2);
    }
}

int main() {
    int n;
    std::cout << "Input thr number of... the number (counting from 1)" << std::endl;
    std::cin >> n;
    std::cout << "Your number is " << fib(n) <<std::endl;
    return 0;
}
