#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac == 2)
		harl.filter(std::string(av[1]));
	else
		std::cout << "Please, enter loglevel" << std::endl;
}