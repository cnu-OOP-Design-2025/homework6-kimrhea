#include <iostream>
#include "penguin.h"

Penguin::Penguin() : Bird("Penguin") {
    cry(); 
}

Penguin::~Penguin() {
    cry(); 
}

void Penguin::cry() {
    std::cout << "Squawk!" << std::endl;
}

void Penguin::fly() {
    std::cout << "This bird can't fly." << std::endl;
}
