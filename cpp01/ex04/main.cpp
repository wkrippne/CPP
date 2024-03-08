#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout
			<< "Usage: ./ex04 <filename> <string to replace> <replace string>"
			<< std::endl;
		return (1);
	}
	std::ifstream	in_file(av[1]);
	std::ofstream	out_file((std::string(av[1]) + ".replace").c_str());
	std::string		to_find = std::string(av[2]);
	std::string		replace = std::string(av[3]);
	std::string		line;

	if (!in_file.is_open())
	{
		std::cout
			<< "Unable open file "
			<< av[1]
			<< std::endl;
		return (1);
	}
	if (!out_file.is_open())
	{
		std::cout
			<< "Unable open file "
			<< std::string(av[1]) + ".replace"
			<< std::endl;
		return (1);
	}
	while (std::getline(in_file, line))
	{
		size_t pos = line.find(to_find, 0);
		while (pos != std::string::npos)
		{
			line.erase(pos, to_find.length()).insert(pos, replace);
			pos = line.find(to_find, pos + replace.length());
		}
		out_file << line << "\n";
	}
}
