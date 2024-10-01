#include <cstdlib>
#include "Trapeze.h"
#include "Rhombus.h"
#include "Pentagon.h"

void navigation();

int main() {
    int key = 6;
    Figure *ptr;

    while (key != 4){

        navigation();
        std::cin >> key;
        switch(key){
            case 1:
                std::cout << "Print side of Trapeze" << std::endl;
                ptr = new Trapeze(std::cin);
                std::cout << "Trapeze" << std::endl;

                break;
            case 2:
                std::cout << "Print side of Rhombus" << std::endl;
                ptr = new Rhombus(std::cin);
                std::cout << "Rhombus" << std::endl;

                break;
            case 3:
                std::cout << "Print side of Pentagon" << std::endl;
                ptr = new Pentagon(std::cin);
                std::cout << "Pentagon" << std::endl;

                break;
            case 4:
                std::cout << "Exit" << std::endl;
                break;

                default :
                    if(key != 4) std::cout << "WTF?" << std::endl;
        }
        if(key != 4){
            ptr->Print();
            std::cout << "Square:" << ptr->Square() << std::endl;
            delete ptr;
        }
    }
    return 0;
}
void navigation(){
    printf("1) Create Trapeze\n");
    printf("2) Create Rhombus\n");
    printf("3) Create Pentagon\n");
    printf("4) Exit\n");
}