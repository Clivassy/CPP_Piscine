#ifndef CAT_H
#define CAT_H

//------ librairies------------
#include <iostream>
#include <string>
#include "Animal.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Cat : public Animal
{
    public:
        Cat( void );
        Cat( std::string type );
        Cat( const Cat &copy );
        Cat &operator=( Cat const &copy );
        ~Cat( void );
        void    makeSound( void )const;
};  

#endif
