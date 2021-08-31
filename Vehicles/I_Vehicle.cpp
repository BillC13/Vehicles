#include "I_Vehicle.hpp"

void Vehicles::I_Vehicle::ReplaceWheels(double newWheelDiameter)
{
	std::cout << "Unknown Vehicle. No work Carried out." << std::endl;
}

void Vehicles::I_Vehicle::SetNumWheels(int newNumWheels)
{
	std::cout << "Unknown Vehicle. No work Carried out." << std::endl;
}

void Vehicles::I_Vehicle::SetNumDoors(int newNumDoors)
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

void Vehicles::I_Vehicle::SetVehicle()
{
	std::cout << "Unknown Vehicle. No work Carried out." << std::endl;
}
