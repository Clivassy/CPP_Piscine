#include "Harl.hpp"

Harl::Harl( void )
{

}
Harl:: ~Harl( void )
{

}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level )
{
	void (Harl::*functionsPointer[4])(void);

	functionsPointer[0] = &Harl::debug;
	functionsPointer[1] = &Harl::info;
	functionsPointer[2] = &Harl::warning;
	functionsPointer[3] = &Harl::error;
    //functionsPointer[4] = &Harl::_inexistingMsg;

	std::string complaints[4] = {"DEBUG", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == complaints[i])
			return (this->*functionsPointer[i])();
 	}
	std::cout << "Whatever you say..I want to complain" << std::endl;
} 