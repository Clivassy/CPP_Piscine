#include "Zombie.hpp"

Zombie:: Zombie( void )
{
    this->newZombie();
    std::cout << this->name << endl;
}

Zombie::~Zombie( void ) 
{
    
}

void    Zombie::announce( void )
{
    std::cout << this->name << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie   *Zombie::newZombie( std::string name )
{
    Zombie newZombie;
    std::cout << "zombie name :" << std::endl;
    getline(std::cin, newZombie.name);
    return (newZombie);
}

