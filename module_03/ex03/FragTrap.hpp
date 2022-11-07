#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H

//------ librairies------------
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class FragTrap : public virtual ClapTrap
{
    public:
    FragTrap( void ); 
    FragTrap( std::string name ); 
    FragTrap( const FragTrap &copy );
    ~FragTrap( void );
    FragTrap &operator=( FragTrap const &copy );

    void attack( const std::string& target );
    void highFivesGuys( void) ;
};
std::ostream &operator<<(std::ostream &out, FragTrap const &elem);
#endif