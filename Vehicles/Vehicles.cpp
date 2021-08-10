// Vehicles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.hpp"

int main()
{
    std::cout << "Hello World! Here are some vehicles!"  << std::endl;

    // conjour up vehicles:
    Vehicles::Car car_tony = Vehicles::Car("Tony's Car", 4, 35);

    //TODO:
    // Vehicles::Lorry lorry_tony = Vehicles::Lorry("Tony's Lorry", ..........

    // report on the vehicles:
    std::cout << car_tony.VehicleReport() << std::endl;

    //TODO:
    // std::cout << lorry_tony.VehicleReport() << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


