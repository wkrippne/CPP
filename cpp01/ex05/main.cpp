#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac == 2)
		harl.complain(std::string(av[1]));
	else
	{
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
	}
}