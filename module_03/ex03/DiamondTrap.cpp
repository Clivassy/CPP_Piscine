#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap( void ) 
: ClapTrap("Unknown_clap_name", 100, 50, 30), ScavTrap("Unknown"), FragTrap("Unknown"), _name("Unknown")
{
    std::cout << "DiamondTrap: constructor by default called and create: " << _name  << std::endl;
}

DiamondTrap::DiamondTrap( std::string name )
: ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "DiamondTrap: constructor called and create: " << _name << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "DiamondTrap: destructor called and destroy: " << _name << std::endl;
}

DiamondTrap   &DiamondTrap::operator=( DiamondTrap const &copy )
{
    this->_name = copy.getName();
    this->_attackDamage = copy.getAttackDamage();
    this->_energyPoints = copy.getEnergyPoints();
    this->_hitPoints = copy.getHitPoints();
    return (*this);
}

DiamondTrap:: DiamondTrap( const DiamondTrap &copy ):
 ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap: Constructor by copy called" << std::endl;
    *this = copy;
}

void DiamondTrap::attack( const std::string& target )
{
    ScavTrap::attack(target);
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &elem)
{
    out << GREEN "------------------------------" CLEAR << std::endl;
    out << "DiamondTrap Name : " << elem.getDiamondName() << std::endl;
    out << "DiamondTrap Hit Points : " << elem.getHitPoints() << std::endl;
    out << "DiamondTrap Energy Points : " << elem.getEnergyPoints() << std::endl;
    out << "DiamondTrap Damages : " << elem.getAttackDamage() << std::endl;
    out << GREEN "------------------------------" CLEAR << std::endl;
    return (out);
}

std::string DiamondTrap::getDiamondName() const
{
    return (this->_name);
}

void DiamondTrap::whoAmI()
{
    std::cout << YELLOW << "I'm " << this->_name << " also named as : " << ClapTrap::getName() << std::endl;
}