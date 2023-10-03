// Copyright (c) 2023 Ms Raffin All rights reserved.
//
// Created by: Val
// Created on: Sep, 26, 2023
// This program asks the user for the length
// and width of a rectangle. It then calculates
// and displays the area and perimeter.
#include <iostream>

float diameter, subtotal, tax, total;
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.50;

int main() {
    // input - getting the diameter
    std::cout << "What is the diameter of the pizza??\n";
    std::cin >> diameter;

    // process - Calculating stuff
    subtotal = diameter * INGRED_COST + LABOUR_COST + RENTAL_COST;
    tax = subtotal * HST;
    total = tax + subtotal;

    // Output - Display total
    std::cout << "The total cost of the pizza is " << total << " dollars";
    std::cout << "\n";
}
