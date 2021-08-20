#include "I_Vehicle.hpp"

void Vehicles::I_Vehicle::ReplaceWheels(double newWheelDiameter)
{
	int currentNumWheels = (int) m_wheels.size();
	if (currentNumWheels < 2)
	{
		std::cout << "Vehicle had missing wheels! Fitting 4 Wheels." << std::endl;
		currentNumWheels = 2;
	}

	m_wheels.clear();

	for (int i = 0; i < currentNumWheels; i++)
	{
		m_wheels.push_back(Wheel(newWheelDiameter)); //create a wheel and add it to the vector of wheels
	}
}

void Vehicles::I_Vehicle::SetNumWheels(int newNumWheels)
{
	std::cout << "Unknown Vehicle. No work Carried out." << std::endl;
}

void Vehicles::I_Vehicle::SetNumDoors(int newNumDoors)
{
	std::cout << "Unknown Vehicle. No work Carried out." << std::endl;
}

void Vehicles::I_Vehicle::SetVehicle()
{
	std::cout << "Unknown Vehicle. No work Carried out." << std::endl;
}

void Vehicles::I_Vehicle::RaiseSuspension(double newHeight)
{
	double currentHeight = m_height;
	m_height = m_height + newHeight;
}

void Vehicles::I_Vehicle::GoFasterStripes(bool stripes)
{
	if (stripes) std::cout << "Vehicle is now so much faster! Zoom!\n";
}