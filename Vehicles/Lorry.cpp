#include <iostream>
#include "Lorry.hpp"

namespace Vehicles
{
	Lorry::Lorry(std::string name, int doors, int wheels, int wheeldiameter)  //names for the parameters are NOT optional here
	{
		// hook up the name and number of doors and wheels to the private fields:
		m_name = name;
		m_doors = doors;
		m_wheel = wheels;

		// cycle through the number of wheels in m_wheel to create the m_wheels vector
		for (int i = 0; i < m_wheel; i++)
		{
			m_wheels.push_back(Wheel(wheeldiameter)); //create a wheel and add it to the vector of wheels
		}

		// give it a default size
		m_length = 16500;
		m_width = 2550;
		m_height = 4950;
		m_weight = 40000;
	}

	Lorry::~Lorry()
	{
		// destructor, just for fun.  // This will run automatically when the program ends.
		std::cout << m_name + " was sold to a dodgy second hand dealer!" << std::endl;
	}

	std::string Lorry::VehicleReport()
	{
		// this is just declaring a string then sequentially adding more to it:

		std::string report = "This Lorry is: " + m_name + "\n";
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