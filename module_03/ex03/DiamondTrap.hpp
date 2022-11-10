#ifndef DIAMOND_TRAP_H
#define DIAMOND_TRAP_H

//------ librairies------------
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
    public:
    DiamondTrap( void ); 
    DiamondTrap( std::string name ); 
    DiamondTrap( const DiamondTrap &copy );
    ~DiamondTrap( void );
    DiamondTrap &operator=( DiamondTrap const &copy );
    std::string getDiamondName()const;
    void    attack( const std::string& target );
    void    whoAmI( void );
};
std::ostream &operator<<(std::ostream &out, DiamondTrap const &elem);
#endif