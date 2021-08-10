#pragma once
#include <string>

namespace Vehicles
{
	class Wheel
	{
		
	public:
		Wheel(int diameter);		// declare constructor (you must provide a diameter to create a wheel)
		std::string WheelReport();  // declare a function that will tell us about the wheel
	private:
		int m_diameter;			// declare a private variable to contain the diameter
	};

}