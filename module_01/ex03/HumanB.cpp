#include "HumanB.hpp"

HumanB:: HumanB( std::string name ) : _name(name), _weapon(NULL)
{
    // constrcuteur avec initialisation des attributs
}
HumanB::~HumanB( void ) 
{
    // destructeur
}

void    HumanB::setWeapon(Weapon &weapon)
{
   _weapon = &weapon;
}

void    HumanB::attack()const
{
    if (_weapon != NULL)
    {
        std::cout << _name << " attacks with " << _weapon->getType() << std::endl;
    }
    else
    {
        std::cout << _name << " attacks without weapon " << std::endl;
    }

}