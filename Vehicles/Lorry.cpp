#include <iostream>
#include "Lorry.hpp"

namespace Vehicles
{
	Lorry::Lorry(std::string name, int doors, double wheeldiameter)  //names for the parameters are NOT optional here
	{
		// hook up the name and number of doors to the private fields:
		m_name = name;
		m_doors = doors;

		// give the Lorry 10 wheels:
		// we will add them to the m_wheels vector declared in I_Vehicle
		m_wheels.push_back(Wheel(wheeldiameter));  //create a wheel and add it to the vector of wheels
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));
		m_wheels.push_back(Wheel(wheeldiameter));

		// give it a default size
		m_length = 16500;
		m_width = 2550;
		m_height = 4950;
	}

	Lorry::~Lorry()
	{
		// destructor, just for fun.  // This will run automatically when the program ends.
		std::cout << m_name + " was sold to a Romanian people trafficker!" << std::endl;
	}

	std::string Lorry::VehicleReport()
	{
		// this is just declaring a string then sequentially adding more to it:

		std::string report = "This Lorry is: " + m_name + "\n";
		report += "  Length: " + std::to_string(m_length) + "\n";
		report += "  Width:  " + std::to_string(m_width) + "\n";
		report += "  Height: " + std::to_string(m_height) + "\n";
		report += "  Height: " + std::to_string(m_height) + "\n";
		report += "  Number of wheels: " + std::to_string(m_wheels.size()) + "\n";
		for (unsigned int i = 0; i < m_wheels.size(); i++)
		{
			report += "  #" + std::to_string(i + 1) + ": " + m_wheels[i].WheelReport();
		}

		return report;
	}
}