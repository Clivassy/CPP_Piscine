#include "HumanB.hpp"

HumanB:: HumanB( std::string _name )
{
    this->_name = _name;
    this->_weapon = NULL;
}
HumanB::~HumanB( void ) 
{

}

void    HumanB::setWeapon(Weapon weap)
{
   _weapon = &weap;
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