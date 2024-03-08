#include "Zombie.hpp"

int	main(void)
{
	Zombie a = Zombie("A");
	Zombie *b = newZombie("B");
	a.announce();
	b->announce();
	randomChump("C");
	delete b;
	return (0);
}