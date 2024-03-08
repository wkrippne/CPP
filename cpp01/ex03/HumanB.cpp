#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "destructor for " << this->name << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout
		<< this->name
		<< " attacks with their "
		<< (this->weapon ? this->weapon->getType() : "hand")
		<< std::endl;
}