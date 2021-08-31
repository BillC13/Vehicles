#pragma once
#include "I_Vehicle.hpp"

namespace Vehicles
{
	class Bike : public I_Vehicle
	{
	public:
		Bike(std::string, int, double);	// prototype for declaring bikes (notice names for the parameters are optional here)
		~Bike();						// I'll also provide a destructor for when we dont need the bike any more.
		std::string VehicleReport();	// VehicleReport required by I_Vehicle
		void SetNumWheels(int);
		void SetNumDoors(int);
		void ReplaceWheels(double);
		void SetVehicle();
	};
}

