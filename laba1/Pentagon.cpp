#include "Pentagon.h"
#include <iostream>
#include <cmath>

Pentagon::Pentagon() : Pentagon(0, 0) {
}

Pentagon::Pentagon(size_t i, size_t j) : side_a(i), side_b(j) {
    std::cout << "Pentagon created: " << side_a << ", " << side_b << std::endl;
}

Pentagon::Pentagon(std::istream &is) {
    is >> side_a;
    is >> side_b;
}

Pentagon::Pentagon(const Pentagon& orig) {
    std::cout << "Pentagon copy created" << std::endl;
    side_a = orig.side_a;
    side_b = orig.side_b;
}

double Pentagon::Square() {
    double treag = double(side_a * side_b) / 2.0;
    return treag * 5;

}

void Pentagon::Print() {
    std::cout << "a=" << side_a << ", b=" << side_b << std::endl;

}

Pentagon::~Pentagon() {
    std::cout << "Pentagon deleted" << std::endl;
}