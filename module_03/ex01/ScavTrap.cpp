#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("unknown", 100, 50, 20)
{
    std::cout << "ScavTrap: constructor by default called and create: " <<_name  << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap: constructor called and create: " << _name << std::endl;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "ScavTrap: destructor called and destroy: " << _name << std::endl;
}

ScavTrap   &ScavTrap::operator=( ScavTrap const &copy )
{
    this->_name = copy.getName();
    this->_attackDamage = copy.getAttackDamage();
    this->_energyPoints = copy.getEnergyPoints();
    this->_hitPoints = copy.getHitPoints();
    return (*this);
}

ScavTrap:: ScavTrap( const ScavTrap &copy ) : ClapTrap(copy) 
{
    std::cout << "ScavTrap: Constructor by copy called" << std::endl;
    *this = copy;
}

void ScavTrap::attack( const std::string& target )
{
   if (this->_energyPoints > 0 and this->_hitPoints > 0)
    {
        std::cout << YELLOW "ScavTrap " << this->_name << " attacks ";
        std::cout << target << " causing " << this->getAttackDamage();
        std::cout << " points of damage!" CLEAR << std::endl;
        this->_energyPoints--;
        return;
    }
    std::cout << RED "Oops, not enough energy or hit points to attack" CLEAR << std::endl;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const &elem)
{
    out << GREEN "------------------------------" CLEAR << std::endl;
    out << "ScavTrap Name : " << elem.getName() << std::endl;
    out << "ScavTrap Hit Points : " << elem.getHitPoints() << std::endl;
    out << "ScavTrap Energy Points : " << elem.getEnergyPoints() << std::endl;
    out << "ScavTrap Damages : " << elem.getAttackDamage() << std::endl;
    out << GREEN "------------------------------" CLEAR << std::endl;
    return (out);
}

void ScavTrap::guardGate()
{
    std::cout << "ScarvTrap : " << this->getName() << " turned into gate keeper mode" << std::endl;
}