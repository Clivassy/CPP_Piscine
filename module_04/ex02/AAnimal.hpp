#ifndef AANIMAL_H
#define AANIMAL_H

//------ librairies------------
#include <iostream>
#include <string>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class AAnimal{

    protected:
    std::string _type;

    public:
    AAnimal( void );
    AAnimal( std::string type );
    virtual ~AAnimal( void );
    AAnimal( const AAnimal &copy );
    AAnimal &operator=( AAnimal const &copy );
    std::string getType( void )const;
    virtual void    makeSound( void )const = 0;
    virtual void    getIdea(int index)const = 0;
};
#endif