#pragma once

#include "I_Vehicle.hpp"
#include "Car.hpp"
#include "Lorry.hpp"

namespace Vehicles
{
	class Workshop
	{
		std::shared_ptr<Vehicles::I_Vehicle> m_WorkingVehicle;

	public:
		Workshop();		// declare constructor  
		~Workshop();	// destructor

		void SetWorkingVehicle(std::shared_ptr<Vehicles::I_Vehicle>);

		bool WorkingVehicleIsLorry();
		bool WorkingVehicleIsCar();
	};
}
