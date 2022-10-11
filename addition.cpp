// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: October 2022
// This program calculates sum of two integers
//    with user input

#include <cmath>
#include <iostream>

int main() {
    // this function calculates sum of two integers
    int integerOne;
    int integerTwo;
    int sum;

    // input
    std::cout << "Enter integer one: ";
    std::cin >> integerOne;
    std::cout << "Enter integer two: ";
    std::cin >> integerTwo;

    // process
    sum = integerOne + integerTwo;

    // output
    std::cout << "\nSum is " << (sum) << std::endl;

    std::cout << "\nDone." << std::endl;
}
