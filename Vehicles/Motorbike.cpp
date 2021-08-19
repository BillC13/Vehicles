#include <iostream>
#include "Motorbike.hpp"

namespace Vehicles
{
	Bike::Bike(std::string name, int nowheels, double wheeldiameter)  //names for the parameters are NOT optional here
	{
		// hook up the name and number of doors to the private fields:
		m_name = name;
		int no_wheels = nowheels;

		// give the bike m_wheels - it could be a three wheeler:
		// we will add them to the m_wheels vector declared in I_Vehicle
		for (int i = 0; i < no_wheels; i++)
		{
			m_wheels.push_back(Wheel(wheeldiameter)); //create a wheel and add it to the vector of wheels
		}

		// give it a default size
		m_length = 2200;
		m_width = 800;
		m_height = 1000;
	}

	Bike::~Bike()
	{
		// destructor, just for fun.  // This will run automatically when the program ends.
		std::cout << m_name + "'s bike was sold to WeBuyAnyBike!" << std::endl;
	}

	std::string Bike::VehicleReport()
	{
		// this is just declaring a string then sequentially adding more to it:

		std::string report = m_name + "'s bike\n";
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

	void Bike::SetNumWheels(int newNumWheels)
	{
		if (newNumWheels > 3)
		{
			std::cout << "Cannot fit more than 3 wheels! Fitting 3 Wheels." << std::endl;
			newNumWheels = 3;
		}
		double currentWheelDiameter = m_wheels[0].GetWheelDiameter(); //get diameter from first existing wheel
		m_wheels.clear();
		for (int i = 0; i < newNumWheels; i++)
		{
			m_wheels.push_back(Wheel(currentWheelDiameter)); //create a wheel and add it to the vector of wheels
		}
	}
}


