#include <iostream>
#include "Motorbike.hpp"

namespace Vehicles
{
	Bike::Bike(std::string name, int wheels, double wheeldiameter)  //names for the parameters are NOT optional here
	{
		// hook up the name and number of doors to the private fields:
		m_name = name;
		int no_wheels = wheels;
		if (no_wheels < 2)
		{
			std::cout << "Cannot have less than 2 Wheels! Bike has 2 Wheels." << std::endl;
			no_wheels = 2;
		} else if (no_wheels > 4)
		{
			std::cout << "Cannot have more than 4 Wheels! Bike has 4 Wheels." << std::endl;
			no_wheels = 4;
		}

		// give the bike m_wheels:
		// we will add them to the m_wheels vector declared in I_Vehicle
		for (int i = 0; i < no_wheels; i++)
		{
			m_wheels.push_back(std::make_shared<Vehicles::Wheel>(wheeldiameter)); //create a wheel and add it to the vector of wheels
		}

		// give it a default size
		m_length = 2000;
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

		std::string report = "This bike belongs to: " + m_name + "\n";
		report += "  Length: " + std::to_string(m_length) + "\n";
		report += "  Width:  " + std::to_string(m_width) + "\n";
		report += "  Height: " + std::to_string(m_height) + "\n";
		report += "  Number of wheels: " + std::to_string(m_wheels.size()) + "\n";
		for (unsigned int i = 0; i < m_wheels.size(); i++)
		{
			report += "  #" + std::to_string(i + 1) + ": " + m_wheels[i]->WheelReport();
		}

		return report;
	}

	void Bike::SetNumWheels(int newNumWheels)
	{
		if (newNumWheels < 2)
		{
			std::cout << "Cannot fit less than 2 Wheels! Fitting 2 Wheels." << std::endl;
			newNumWheels = 2;
		} else if (newNumWheels > 4)
		{
			std::cout << "Cannot fit more than 4 Wheels! Fitting 4 Wheels." << std::endl;
			newNumWheels = 4;
		}
		double currentWheelDiameter = m_wheels[0]->GetWheelDiameter(); //get diameter from first existing wheel
		m_wheels.clear();
		for (int i = 0; i < newNumWheels; i++)
		{
			m_wheels.push_back(std::make_shared<Vehicles::Wheel>(currentWheelDiameter)); //create a wheel and add it to the vector of wheels
		}
	}

	void Bike::ReplaceWheels(double newWheelDiameter)
	{
		int currentNumWheels = (int)m_wheels.size();
		if (currentNumWheels < 2)
		{
			std::cout << "Vehicle had missing wheels! Fitting 2 Wheels." << std::endl;
			currentNumWheels = 2;
		}

		m_wheels.clear();

		for (int i = 0; i < currentNumWheels; i++)
		{
			m_wheels.push_back(std::make_shared<Vehicles::Wheel>(newWheelDiameter)); //create a wheel and add it to the vector of wheels
		}
	}

	void Bike::SetNumDoors(int newNumDoors)
	{
		std::cout << "Cannot fit doors on a bike!" << std::endl;
	}

	void Bike::SetVehicle()
	{
		std::cout << "Bike Brought into Workshop for work! " << std::endl;
		std::cout << "Bike's Vehicle Report:" << std::endl;
		std::cout << VehicleReport() << std::endl;
	}
}