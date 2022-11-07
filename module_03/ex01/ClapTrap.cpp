#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ):
_name("unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap: Constructor by default called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): 
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap: Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
: _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    //
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

ClapTrap:: ClapTrap( const ClapTrap &copy )
{
    std::cout << "ClapTrap: Constructor by copy called" << std::endl;
    *this = copy;
}

//opérateur de surcharge pour l'assignation 
ClapTrap   &ClapTrap::operator=( ClapTrap const &copy )
{
    this->_name = copy.getName();
    this->_attackDamage = copy.getAttackDamage();
    this->_energyPoints = copy.getEnergyPoints();
    this->_hitPoints = copy.getHitPoints();
    return (*this);
}

std::string ClapTrap::getName(void) const
{
    return(this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
    return(this->_hitPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return(this->_attackDamage);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
    return(this->_energyPoints);
}

void ClapTrap::attack( const std::string& target )
{
    if (this->_energyPoints > 0 and this->_hitPoints > 0)
    {
        std::cout << YELLOW "ClapTrap " << this->_name << " attacks ";
        std::cout << target << " causing " << this->_attackDamage;
        std::cout << " points of damage!" CLEAR << std::endl;
        this->_energyPoints--;
        return ;
    }
    std::cout << RED "Oops, not enough energy or hit points to attack" CLEAR << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_energyPoints > 0 and this->_hitPoints > 0)
    {
        std::cout << YELLOW "ClapTrap " << this->_name << " took ";
        std::cout << amount << " points of damage!" CLEAR << std::endl;
        if (amount > this->_energyPoints)
        {
            this->_energyPoints = 0;
            return ;
        }
        this->_hitPoints = this->_hitPoints - amount;
        return ;
    }
    std::cout << RED "Oops, not enough energy or hit points to take damage" CLEAR << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_energyPoints > 0 and this->_hitPoints > 0)
    {
        std::cout << YELLOW "ClapTrap " << this->_name << " won ";
        std::cout << amount << " points of repair" CLEAR << std::endl;
        this->_hitPoints = this->_hitPoints + amount;
        this->_energyPoints--;
        return ;
    }
    std::cout << RED "Oops, not enough energy or hit points to be repaired" CLEAR << std::endl;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const &elem)
{
    out << GREEN "------------------------------" CLEAR << std::endl;
    out << "Claptrap Name : " << elem.getName() << std::endl;
    out << "Claptrap Hit Points : " << elem.getHitPoints() << std::endl;
    out << "Claptrap Energy Points : " << elem.getEnergyPoints() << std::endl;
    out << "Claptrap Damages : " << elem.getAttackDamage() << std::endl;
    out << GREEN "------------------------------" CLEAR << std::endl;
    return (out);
}