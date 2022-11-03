#include "FragTrap.hpp"

// add les protections si points de vie == 10 
FragTrap::FragTrap( void ) : ClapTrap()
{
    std::cout << "FragTrap: Constructor by default called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
    std::cout << "FragTrap: Constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}

//opérateur de surcharge pour l'assignation 
FragTrap   &FragTrap::operator=( FragTrap const &copy )
{
    this->_name = copy.getName();
    this->_attackDamage = copy.getAttackDamage();
    this->_energyPoints = copy.getEnergyPoints();
    this->_hitPoints = copy.getHitPoints();
    return (*this);
}

FragTrap:: FragTrap( const ClapTrap &copy )
{
    std::cout << "FragTrap: Constructor by copy called" << std::endl;
    *this = copy;
}

void FragTrap::attack( const std::string& target )
{
    if (this->_energyPoints > 0)
    {
        std::cout << YELLOW "FragTrap " << this->_name << " attacks ";
        std::cout << target << " causing " << this->_attackDamage;
        std::cout << " points of damage!" CLEAR << std::endl;
        this->_energyPoints--;
        return;
    }
    std::cout << RED "Oops, not enough energy point to attack" CLEAR << std::endl;
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "Hey, give me high five bro" << std::endl;
}