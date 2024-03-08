#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie default constructor" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie constructor for " << this->name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destructor for " << this->name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}