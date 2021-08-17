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

	std::cout << m_WorkingVehicle->VehicleReport() << std::endl;
}

bool Vehicles::Workshop::WorkingVehicleIsLorry()
{
	// using raw pointers. 
	// Extract the raw pointer from the smart pointer using .get()
	// Use a raw pointer dynamic cast to recast it as a Lorry,
	// a raw pointer of the Lorry type is returned pointing to the original object, if that original object was a Lorry,
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
