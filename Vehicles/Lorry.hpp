#pragma once
#include "I_Vehicle.hpp"

namespace Vehicles
{
	class Lorry : I_Vehicle
	{
	public:
		Lorry(std::string, int, double);	// prototype for declaring lorries (notice names for the parameters are optional here)
		~Lorry();							// I'll also provide a destructor for when we dont need the Lorry any more.
		std::string VehicleReport();	// VehicleReport required by I_Vehicle
	};
}

