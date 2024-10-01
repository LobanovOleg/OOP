#include "Pentagon.h"
#include <iostream>

Pentagon::Pentagon() : Pentagon(0, 0) { }

Pentagon::Pentagon(size_t i, size_t j) : side_a(i), side_b(j){
    std::cout << "Пятиугольник создан: " << std::endl;
}

Pentagon::Pentagon(std::istream &is){
    is >> side_a;
    is >> side_b;
}

Pentagon::Pentagon(const Pentagon& orig){
    std::cout << "Копия пятиугольника создана" << std::endl;
    side_a = orig.side_a;
    side_b = orig.side_b;
}

std::ostream& operator << (std::ostream& os, const Pentagon& obj){
    os << "a=" << obj.side_a << ", b=" << obj.side_b << std::endl;
    return os;
}

void Pentagon::Print(){
    std::cout << "a=" << side_a << ", b=" << side_b << std::endl;
}

Pentagon& Pentagon::operator=(const Pentagon& right){
    if(this == &right){
        return *this;
    }
    side_a = right.side_a;
    side_b = right.side_b;
    return *this;
}

Pentagon::~Pentagon(){
    std::cout << "Пятиугольник удален" << std::endl;
}