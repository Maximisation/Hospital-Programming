#include <iostream>
#include "dop.h"
#include <vector>

int main() {
    Ellipse elly(2,5,"egg");
    Circle cirry(4,"Round");
    Quadrangle qua(3,4,1,2,"Four");
    Triangle tria(4,5,3,"Bill Cypher");
    Rectangle flop(2,6,"Brus");
    Square block(6,"Block");
    std::vector<Figure*> list;
    list.push_back(&elly);
    list.push_back(&cirry);
    list.push_back(&qua);
    list.push_back(&tria);
    list.push_back(&flop);
    list.push_back(&block);
    for (auto& i:list){
        i->Info();
        i->Perimiter();
        i->Surface();
        std::cout << "~~ Border ~~"<<std::endl;
    }
}
