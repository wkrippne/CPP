#ifndef HARL_H
# define HARL_H
# include <iostream>

class Harl
{
	private:
		void 		debug( void );
		void 		info( void );
		void 		warning( void );
		void		error( void );
		std::string	_levels[4];
		void		(Harl::*_methods[4])(void);
		void		(Harl::*_getMethod(std::string level))(void);
	public:
		Harl();
		void complain( std::string level );
		void filter( std::string minLevel );
};

# endif