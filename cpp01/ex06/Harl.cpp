#include "Harl.hpp"


Harl::Harl()
{
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	this->_methods[0] = &Harl::debug;
	this->_methods[1] = &Harl::info;
	this->_methods[2] = &Harl::warning;
	this->_methods[3] = &Harl::error;
}

void (Harl::*Harl::_getMethod(std::string level))(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_levels[i].compare(level))
			return (this->_methods[i]);
	}
	return (NULL);
}

void Harl::complain(std::string level)
{
	void	(Harl::*meth)(void) = this->_getMethod(level);
	if (meth)
		(this->*meth)();
	else
		std::cout << "Log level " << level << " not found" << std::endl;
}

void Harl::filter(std::string minLevel)
{
	int	levelNum = -1;
	enum levels {DEBUG, INFO, WARNING, ERROR};

	for (int i = 0; i < 4; i++)
	{
		if (!this->_levels[i].compare(minLevel))
		{
			levelNum = i;
			break ;
		}
	}
	switch (levelNum)
	{
		case DEBUG:
			(this->*_methods[0])();
		case INFO:
			(this->*_methods[1])();
		case WARNING:
			(this->*_methods[2])();
		case ERROR:
			(this->*_methods[3])();
			break ;
		default:
			std::cout << "Log level " << minLevel << " not found" << std::endl;
	}
}

void Harl::debug()
{
	std::cout << "[DEBUG] message" << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO] message" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING] message" << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR] message" << std::endl;
}