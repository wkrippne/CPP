#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
	std::cout << "destructor for " << this->name << std::endl;
}

void HumanA::attack(void)
{
	std::cout
		<< this->name
		<< " attacks with their "
		<< this->weapon.getType()
		<< std::endl;
}