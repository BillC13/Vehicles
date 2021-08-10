#pragma once
#include <string>
#include <vector>
#include "Wheel.hpp"

namespace Vehicles
{
	// I'm using the convention "I_" to make it clear this is a common interface which several classes will share
	class I_Vehicle
	{
	public:
		// Function to tell us about the vehicle:
		// virtual function.  Any class based on I_Vehicle must implement VehicleReport somehow, in its own way.
		virtual std::string VehicleReport() = 0; // you need the "= 0" for virtual functions.

	protected:  // only I_Vehicle and classes derived from it (such as Car) can access these:
		std::string m_name;
		int m_length = 0;
		int m_width  = 0;
		int m_height = 0;
		int m_weight = 0;
		int m_wheel = 0;
		int m_doors  = 0;
		std::vector<Wheel> m_wheels;
	};

}
