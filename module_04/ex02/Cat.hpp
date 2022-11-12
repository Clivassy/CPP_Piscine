#ifndef CAT_H
#define CAT_H

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

class Cat : public AAnimal
{
    private:
    Brain*  brain;

    public:
    Cat( void );
    Cat( std::string type );
    ~Cat( void );
    Cat( const Cat &copy );
    Cat &operator=( Cat const &copy );
    void    makeSound( void )const;
    void    getIdea(int index)const;
};

#endif
