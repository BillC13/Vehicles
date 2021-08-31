#include <iostream>
#include <memory>

#include "Workshop.hpp"


Vehicles::Workshop::Workshop()
{
	std::cout << "Workshop is open for business!" << std::endl;
}

Vehicles::Workshop::~Workshop()
{
	// destructor, just for fun.  // This will run automatically when the program ends.
	std::cout << "Workshop was demolished!" << std::endl;
}

void Vehicles::Workshop::SetWorkingVehicle(std::shared_ptr<Vehicles::I_Vehicle> in_vehicle)
{
	m_WorkingVehicle = in_vehicle;
	m_WorkingVehicle->SetVehicle();
}

void Vehicles::Workshop::ChangeNumberOfDoors(int newNumDoors)
{
	std::cout << "Attempting to change the number of DOORS..." << std::endl;
	if (!m_WorkingVehicle) {
		std::cout << "No Vehicle in Workshop" << std::endl;
		return;
	}
	m_WorkingVehicle->SetNumDoors(newNumDoors);
}

void Vehicles::Workshop::ChangeNumberOfWheels(int newNumWheels)
{
	std::cout << "Attempting to change the number of WHEELS..." << std::endl;
	if (!m_WorkingVehicle) {
		std::cout << "No Vehicle in Workshop" << std::endl;
		return;
	}
	m_WorkingVehicle->SetNumWheels(newNumWheels);
}

void Vehicles::Workshop::ChangeWheels(double newWheelDiameter)
{
	std::cout << "Attempting to REPLACE WHEELS..." << std::endl;

	if (!m_WorkingVehicle)
	{
		std::cout << "No Vehicle in Workshop" << std::endl;
	}
	else
	{
		m_WorkingVehicle->ReplaceWheels(newWheelDiameter);
		std::cout << "Vehicle Report following work order:" << std::endl;
		std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
	}
}

void Vehicles::Workshop::RaiseSuspension(double newHeight)
{
	std::cout << "Raising the SUSPENSION..." << std::endl;
	if (!m_WorkingVehicle) {
		std::cout << "No Vehicle in Workshop" << std::endl;
		return;
	}
	m_WorkingVehicle->RaiseSuspension(newHeight);
	std::cout << "Vehicle Report following work order:" << std::endl;
	std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
}

void Vehicles::Workshop::GoFasterStripes(bool stripes)
{
	std::cout << "Adding go faster stripes..." << std::endl;
	if (!m_WorkingVehicle) {
		std::cout << "No Vehicle in Workshop" << std::endl;
		return;
	}
	m_WorkingVehicle->GoFasterStripes(stripes);
	std::cout << "Vehicle Report following work order:" << std::endl;
	std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
}
