#ifndef DOG_H
#define DOG_H

//------ librairies------------
#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Dog : public AAnimal
{
    private:
    Brain*  brain;

    public:
    Dog( void );
    Dog( std::string type );
    ~Dog( void );
    Dog( const Dog &copy );
    Dog &operator=( Dog const &copy );
    void    makeSound( void ) const;
    void    getIdea(int index)const;
};
#endif