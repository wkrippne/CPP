#include <iostream>

int	main(void)
{
	std::string	s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;
	std::cout << "s:\t" << &s << std::endl;
	std::cout << "ptr:\t" << &ptr << std::endl;
	std::cout << "ref:\t" << &ref << std::endl;
	std::cout << "s:\t" << s << std::endl;
	std::cout << "ptr:\t" << *ptr << std::endl;
	std::cout << "ref:\t" << ref << std::endl;
}
