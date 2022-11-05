#include "Animal.hpp"

Animal::Animal( void ): _type("Unknown")
{
    // type animal vide
    std::cout << "Animal: Constructor by default called" << std::endl;
}

Animal::Animal( std::string type ): 
_type(type)
{
    // type animal initialisé avec la valeur de notre choix
    std::cout << "Animal: Constructor called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal:: Animal( const Animal &copy )
{
    std::cout << "Animal: Constructor by copy called" << std::endl;
    *this = copy;
}

//opérateur de surcharge pour l'assignation 
Animal   &Animal::operator=( Animal const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

std::string Animal::getType( void ) const
{
    return(this->_type);
}

void    Animal::makeSound( void )const
{
    std::cout << "I can't hear any animal sound..." << std::endl;
}

void    Animal::getIdea(int index)const
{
    (void)index;
}