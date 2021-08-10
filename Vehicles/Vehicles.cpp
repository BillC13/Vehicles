// Vehicles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.hpp"
#include "Lorry.hpp"

int main()
{
    std::cout << "Hello World! Here are some vehicles!"  << std::endl;

    // conjour up vehicles:
    Vehicles::Car car_bill = Vehicles::Car("Bill's Car", 4, 4, 35);

    //TODO:
    Vehicles::Lorry lorry_bill = Vehicles::Lorry("Bill's Lorry", 2, 10, 315);

    // report on the vehicles:
    std::cout << car_bill.VehicleReport() << std::endl;

    //TODO:
    std::cout << lorry_bill.VehicleReport() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


