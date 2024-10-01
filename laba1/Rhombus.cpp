#include "Rhombus.h"
#include <iostream>
#include <cmath>

Rhombus::Rhombus() : Rhombus(0) {
}

Rhombus::Rhombus(size_t i) : side_a(i) {
    std::cout << "Rhombus created: " << side_a << std::endl;
}

Rhombus::Rhombus(std::istream &is) {
    is >> side_a;
}

Rhombus::Rhombus(const Rhombus& orig) {
    std::cout << "Rhombus copy created" << std::endl;
    side_a = orig.side_a;
}

double Rhombus::Square() {
    double diag = sqrt((side_a)*(side_a) + (side_a)*(side_a));
    return diag*diag / 2.0;

}

void Rhombus::Print() {
    std::cout << "a=" << side_a << std::endl;

}

Rhombus::~Rhombus() {
    std::cout << "Rhombus deleted" << std::endl;
}