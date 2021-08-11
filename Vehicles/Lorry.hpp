#pragma once
#include "I_Vehicle.hpp"

namespace Vehicles
{
	class Lorry : I_Vehicle
	{
	public:
		Lorry(std::string, int, int, int);	// prototype for declaring lorries (notice names for the parameters are optional here)
		~Lorry();							// I'll also provide a destructor for when we dont need the lorry any more.
		std::string VehicleReport();	// VehicleReport required by I_Vehicle
	};
}

