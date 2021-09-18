//
// Created by Maksim on 17.09.2021.
//
#include <iostream>
#include <vector>

std::vector<std::string> split(std::string s, std::string k) {
    std::vector<std::string> v;
    auto n = s.find(k);
    while (n < s.size() && n >= 0) {
        v.push_back(s.substr(0, n));
        s = s.substr(n + k.size());
        n = s.find(k);
    }
    v.push_back(s);
    return v;
}
// Строки разбитые по разделителю это значит разделителей нет в конце, так? Ну впрочем это легко исправить.
int main(){
    std::string ss,kk;
    std::cout << "Input your line here: " << std::endl;
    std::cin >> ss;
    std::cout << "Now input your rasdelitel': " << std::endl;
    std::cin >> kk;
    for (std::string w: split(ss,kk)){
        std::cout << w << "  ";
    }
}