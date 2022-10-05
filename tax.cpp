// Copyright (c) Jessah All rights reserved.
//
// Name Jessah
// 10/5/2022
// This program calculates the tax and total when given subtotal by user input

#include <iomanip>
#include <iostream>

float subtotal, total, tax, GST, PST;

int main() {
    const float bcTax = 12;

    // get user input for subtotal
    std::cout << "Enter the subtotal: ";
    std::cin >> subtotal;

    // calculate tax and total with given subtotal
    // and BC tax
    tax = subtotal * bcTax / 100;
    total = subtotal + tax;

    // display tax and total in terminal
    std::cout << std::endl;
    std::cout << "The total with tax is: $";
    std::cout << std::fixed << std::setprecision(2)
              << std::setfill('0') << total << "\n";

    std::cout << std::endl;
    std::cout << "The tax is: $";
    std::cout << std::fixed << std::setprecision(2)
              << std::setfill('0') << tax << "\n";
}
