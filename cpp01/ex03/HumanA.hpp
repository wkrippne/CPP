#ifndef HUMAN_A_H
# define HUMAN_A_H
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string		name;
		Weapon			&weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
};

#endif