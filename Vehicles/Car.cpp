#include <iostream>
#include "Car.hpp"

namespace Vehicles
{
	Car::Car(std::string name, int doors, int wheels, int wheeldiameter)  //names for the parameters are NOT optional here
	{
		// hook up the name and number of doors to the private fields:
		m_name = name;
		m_doors = doors;
		m_wheel = wheels;

		for (int i = 0; i < m_wheel; i++)
		{
			m_wheels.push_back(Wheel(wheeldiameter)); //create a wheel and add it to the vector of wheels
		}

		// give it a default size
		m_length = 4000;
		m_width  = 2000;
		m_height = 1300;
		m_weight = 1000;
	}

	Car::~Car()
	{
		// destructor, just for fun.  // This will run automatically when the program ends.
		std::cout << m_name + " was sold to WeBuyAnyCar!" << std::endl;
	}

	std::string Car::VehicleReport()
	{
		// this is just declaring a string then sequentially adding more to it:

		std::string report = "This car is: " + m_name + "\n";
		report += "  It has " + std::to_string(m_doors) + " doors" + "\n";
		report += "  Length: " + std::to_string(m_length) + " mm" + "\n";
		report += "  Width:  " + std::to_string(m_width) + " mm" + "\n";
		report += "  Height: " + std::to_string(m_height) + " mm" + "\n";
		report += "  Weight: " + std::to_string(m_weight) + " kg" + "\n";
		report += "  Number of wheels: " + std::to_string(m_wheels.size()) + "\n";
		for (unsigned int i = 0; i < m_wheels.size(); i++)
		{
			report += "  #" + std::to_string(i + 1) + ": " + m_wheels[i].WheelReport();
		}

		return report;
	}
}