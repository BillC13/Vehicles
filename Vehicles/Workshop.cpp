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

	if (WorkingVehicleIsCar())
	{
		std::cout << "Car Brought into Workshop for work! " << std::endl;
		std::cout << "Car's Vehicle Report:" << std::endl;
	}
	if (WorkingVehicleIsLorry())
	{
		std::cout << "Lorry Brought into Workshop for work! " << std::endl;
		std::cout << "Lorry's Vehicle Report:" << std::endl;
	}
	if (WorkingVehicleIsBike())
	{
		std::cout << "Bike Brought into Workshop for work! " << std::endl;
		std::cout << "Bike's Vehicle Report:" << std::endl;
	}

	std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
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

void Vehicles::Workshop::ReplaceWheels(double newWheelDiameter)
{
	std::cout << "Attempting to REPLACE WHEELS..." << std::endl;

	if (!m_WorkingVehicle) {
		std::cout << "No Vehicle in Workshop" << std::endl;
		return;
	}
	m_WorkingVehicle->ReplaceWheels(newWheelDiameter);
	std::cout << "Vehicle Report following work order:" << std::endl;
	std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
}

void Vehicles::Workshop::RaiseSuspension(double newHeight)
{
	if (!m_WorkingVehicle) {
		std::cout << "No Vehicle in Workshop" << std::endl;
		return;
	}
	std::cout << "Raising the SUSPENSION..." << std::endl;

	m_WorkingVehicle->RaiseSuspension(newHeight);
	std::cout << "Vehicle Report following work order:" << std::endl;
	std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
}

void Vehicles::Workshop::GoFasterStripes(bool stripes)
{
	std::cout << "Adding go faster stripes..." << std::endl;

	if (m_WorkingVehicle)
	{
		m_WorkingVehicle->GoFasterStripes(stripes);
		std::cout << "Vehicle Report following work order:" << std::endl;
		std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
	}
	else   // Workshop is empty
	{
		std::cout << "No Vehicle in Workshop" << std::endl;
	}
}

bool Vehicles::Workshop::WorkingVehicleIsLorry()
{
	// using raw pointers. 
	// Extract the raw pointer from the smart pointer using .get()
	// Use a raw pointer dynamic cast to recast it as a Lorry,
	// a raw pointer of the Lorry type is returned poining to the original object, if that original object was a Lorry,
	// otherwise the pointer will point to "null".
	Vehicles::Lorry* RawPtr = dynamic_cast<Vehicles::Lorry*>(m_WorkingVehicle.get());
	return (RawPtr != nullptr); // lorryRawPtr will be "null" if the working vehicle wasn't a lorry.
}

bool Vehicles::Workshop::WorkingVehicleIsCar()
{
	//Vehicles::Car* RawPtr = dynamic_cast<Vehicles::Car*>(m_WorkingVehicle.get());
	//return (RawPtr != nullptr); // lorryRawPtr will be "null" if the working vehicle wasn't a lorry.

	// equivalent process to the raw pointer check above, but only using smart pointer code, no raw pointers.
	std::shared_ptr<Vehicles::Car> shrptr = std::dynamic_pointer_cast<Vehicles::Car>(m_WorkingVehicle);
	return shrptr ? true : false;  // equivalent to: return (shrptr != nullptr);  //which would also work
}

bool Vehicles::Workshop::WorkingVehicleIsBike()
{
	// using raw pointers. 
	// Extract the raw pointer from the smart pointer using .get()
	// Use a raw pointer dynamic cast to recast it as a Lorry,
	// a raw pointer of the Bike type is returned poining to the original object, if that original object was a bike,
	// otherwise the pointer will point to "null".
	Vehicles::Bike* RawPtr = dynamic_cast<Vehicles::Bike*>(m_WorkingVehicle.get());
	return (RawPtr != nullptr); // bikeRawPtr will be "null" if the working vehicle wasn't a bike.
}