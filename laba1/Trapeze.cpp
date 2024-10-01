#include "Trapeze.h"
#include <iostream>
#include <cmath>

Trapeze::Trapeze() : Trapeze(0, 0, 0) {
}

Trapeze::Trapeze(size_t i, size_t j, size_t k) : side_a(i), side_b(j), side_h(k) {
    std::cout << "Trapeze created: " << side_a << ", " << side_b << ", " << side_h << std::endl;
}

Trapeze::Trapeze(std::istream &is) {
    is >> side_a;
    is >> side_b;
    is >> side_h;
}

Trapeze::Trapeze(const Trapeze& orig) {
    std::cout << "Trapeze copy created" << std::endl;
    side_a = orig.side_a;
    side_b = orig.side_b;
    side_h = orig.side_h;
}

double Trapeze::Square() {
     return ((side_a + side_b)*side_h);

}

void Trapeze::Print() {
    std::cout << "a=" << side_a << ", b=" << side_b << ", h=" << side_h << std::endl;

}

Trapeze::~Trapeze() {
    std::cout << "Trapeze deleted" << std::endl;
}