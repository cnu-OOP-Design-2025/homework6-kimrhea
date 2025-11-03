#include <iostream>
#include "duck.h"

Duck::Duck() : Bird("Duck") {
    cry(); 
}

Duck::~Duck() {
    cry(); 
}

void Duck::cry() {
    std::cout << "Quack!" << std::endl;
}