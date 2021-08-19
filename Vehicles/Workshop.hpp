#pragma once

#include "I_Vehicle.hpp"
#include "Car.hpp"
#include "Lorry.hpp"
#include "Motorbike.hpp"

namespace Vehicles
{
	class Workshop
	{
		std::shared_ptr<Vehicles::I_Vehicle> m_WorkingVehicle;

	public:
		Workshop();		// declare constructor  
		~Workshop();	// destructor

		void SetWorkingVehicle(std::shared_ptr<Vehicles::I_Vehicle>);
		void ChangeNumberOfDoors(int);
		void ChangeNumberOfWheels(int);
		void ReplaceWheels(double);
		void RaiseSuspension(double);
		void GoFasterStripes(bool);

		bool WorkingVehicleIsLorry();
		bool WorkingVehicleIsCar();
		bool WorkingVehicleIsBike();
	};
}
