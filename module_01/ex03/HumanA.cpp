#include "HumanA.hpp"

HumanA:: HumanA(std::string name, Weapon &weapon ): _name(name), _weapon(weapon)
{
    // constrcuteur avec initialisation des attributs
}

HumanA::~HumanA( void ) 
{
    // destructeur
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with " << _weapon.getType() << std::endl;
}