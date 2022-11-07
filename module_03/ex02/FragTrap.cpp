#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Unknown", 100, 100, 30)
{
    std::cout << "FragTrap: Constructor by default called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap: Constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}

FragTrap   &FragTrap::operator=( FragTrap const &copy )
{
    this->_name = copy.getName();
    this->_attackDamage = copy.getAttackDamage();
    this->_energyPoints = copy.getEnergyPoints();
    this->_hitPoints = copy.getHitPoints();
    return (*this);
}

FragTrap:: FragTrap( const FragTrap &copy ) : ClapTrap(copy)
{
    std::cout << "FragTrap: Constructor by copy called" << std::endl;
    *this = copy;
}

void FragTrap::attack( const std::string& target )
{
    if (this->_energyPoints > 0 and this->_hitPoints > 0)
    {
        std::cout << YELLOW "FragTrap " << this->_name << " attacks ";
        std::cout << target << " causing " << this->_attackDamage;
        std::cout << " points of damage!" CLEAR << std::endl;
        this->_energyPoints--;
        return;
    }
    std::cout << RED "Oops, not enough energy or hit points to attack" CLEAR << std::endl;
}

std::ostream &operator<<(std::ostream &out, FragTrap const &elem)
{
    out << GREEN "------------------------------" CLEAR << std::endl;
    out << "FragTrap Name : " << elem.getName() << std::endl;
    out << "FragTrap Hit Points : " << elem.getHitPoints() << std::endl;
    out << "FragTrap Energy Points : " << elem.getEnergyPoints() << std::endl;
    out << "FragTrap Damages : " << elem.getAttackDamage() << std::endl;
    out << GREEN "------------------------------" CLEAR << std::endl;
    return (out);
}

void FragTrap::highFivesGuys( void )
{
    std::cout << "Hey " << this->getName() << " ! Give me high five!" << std::endl;
}