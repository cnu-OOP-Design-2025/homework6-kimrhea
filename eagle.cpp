#include <iostream>
#include "eagle.h"

Eagle::Eagle() : Bird("Eagle") {
    cry(); 
}

Eagle::~Eagle() {
    cry(); 
}

void Eagle::cry() {
    std::cout << "Screech!" << std::endl;
}

void Eagle::swim() {
    std::cout << "This bird can't swim." << std::endl;
}
