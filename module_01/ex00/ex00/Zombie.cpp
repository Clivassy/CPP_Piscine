#include "Zombie.hpp"

Zombie:: Zombie( std::string name)
{
    this->_name = name;
}

Zombie::~Zombie( void ) 
{
    std::cout << this->_name << " has been destroyed" << std::endl;
}

std::string    Zombie::getName( void )const
{
    return (this->_name);
}

void    Zombie::setName( std::string name)
{
    this->_name = name;
    return;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

