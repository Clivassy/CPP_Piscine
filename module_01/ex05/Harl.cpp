#include "Harl.hpp"

Harl::Harl( void )
{
	//constructor
}
Harl:: ~Harl( void )
{
	//destructor
}

void    Harl::_debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void    Harl::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
	void (Harl::*functionsPointer[4])(void);

	functionsPointer[0] = &Harl::_debug;
	functionsPointer[1] = &Harl::_info;
	functionsPointer[2] = &Harl::_warning;
	functionsPointer[3] = &Harl::_error;

	std::string complaints[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			return (this->*functionsPointer[i])();
 	}
	std::cout << "Whatever you say..I want to complain" << std::endl;
} 