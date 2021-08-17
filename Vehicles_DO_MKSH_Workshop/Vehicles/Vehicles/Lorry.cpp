#include <iostream>
#include "Lorry.hpp"

namespace Vehicles
{
	Lorry::Lorry(std::string name, int nowheels, double wheeldiameter)  //names for the parameters are NOT optional here
	{
		// hook up the name and number of wheels to the private fields:
		m_name = name;
		int no_wheels = nowheels;

		// give the Lorry m_wheels:
		// we will add them to the m_wheels vector declared in I_Vehicle
		for (int i = 0; i < no_wheels; i++)
		{
			m_wheels.push_back(Wheel(wheeldiameter)); //create a wheel and add it to the vector of wheels
		}
		
		// give it a default no.of doors
		m_doors = 2;

		// give it a default size
		m_length = 17000;
		m_width = 2500;
		m_height = 3000;
	}

	Lorry::~Lorry()
	{
		// destructor, just for fun.  // This will run automatically when the program ends.
		std::cout << m_name + "'s lorry was sold to WeBuyAnyLorry!" << std::endl;
	}

	std::string Lorry::VehicleReport()
	{
		// this is just declaring a string then sequentially adding more to it:

		std::string report = " whose owner is: " + m_name + "\n";
		report += "  Length: " + std::to_string(m_length) + "\n";
		report += "  Width:  " + std::to_string(m_width) + "\n";
		report += "  Height: " + std::to_string(m_height) + "\n";
		report += "  Number of wheels: " + std::to_string(m_wheels.size()) + "\n";
		for (unsigned int i = 0; i < m_wheels.size(); i++)
		{
			report += "  #" + std::to_string(i + 1) + ": " + m_wheels[i].WheelReport();
		}

		return report;
	}






}