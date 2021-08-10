#include "Wheel.hpp"

namespace Vehicles
{
	// I want to define the function named "Wheel" which belongs to the class "Wheel"
	// When they have the same name, it is known as the "constructor".
	// You cannot make a wheel except by using this constructor.
	// Constructors have no return type;

	Wheel::Wheel(int diameter)  //implement the constructor
	{
		// m_diameter is declared in the header "Wheel.hpp".  "m_" means "member".
		// the parameter "diameter" is used to set the value of m_diameter.
		m_diameter = diameter;
	}

	//Now I want to implement the WheelReport Function. Notice this function returns a string:

	std::string Wheel::WheelReport()
	{
		std::string report = "Diameter: " + std::to_string(m_diameter) + "\n";
		// note you must convert the int to a string to add it to another string as above.
		return report;
	}

}