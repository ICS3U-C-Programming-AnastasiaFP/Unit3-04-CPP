// Copyright 2023 Anastasia Friedenstein Patino
// Created on : October.20, 2023
// Program determines wether integer is positive or negative

#include <iostream>

int main() {
    int integer;
    std::cout << "Enter an integer:";
    std::cin >> integer;

    if (integer > 0) {
        std::cout << integer << " is a positive number" << std::endl;
    } else if (integer < 0) {
        std::cout << integer << " is a negative number" << std::endl;
    } else {
        std::cout << integer << " is just zero!" << std::endl;
    }

    return 0;
}
