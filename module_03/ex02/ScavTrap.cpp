#include "ScavTrap.hpp"

// add les protections si points de vie == 10 
ScavTrap::ScavTrap( void ) : ClapTrap()
{
    std::cout << "ScavTrap: Constructor by default called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
    std::cout << "ScavTrap: Constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

//opérateur de surcharge pour l'assignation 
ScavTrap   &ScavTrap::operator=( ScavTrap const &copy )
{
    this->_name = copy.getName();
    this->_attackDamage = copy.getAttackDamage();
    this->_energyPoints = copy.getEnergyPoints();
    this->_hitPoints = copy.getHitPoints();
    return (*this);
}

ScavTrap:: ScavTrap( const ClapTrap &copy )
{
    std::cout << "ScavTrap: Constructor by copy called" << std::endl;
    *this = copy;
}

void ScavTrap::attack( const std::string& target )
{
    if (this->_energyPoints > 0)
    {
        std::cout << YELLOW "ScavTrap " << this->_name << " attacks ";
        std::cout << target << " causing " << this->_attackDamage;
        std::cout << " points of damage!" CLEAR << std::endl;
        this->_energyPoints--;
        return;
    }
    std::cout << RED "Oops, not enough energy point to attack" CLEAR << std::endl;
}

void ScavTrap::guardGate( void )
{
    std::cout << "ScarvTrap : " << this->_name << " turned into gate keeper mode" << std::endl;
}