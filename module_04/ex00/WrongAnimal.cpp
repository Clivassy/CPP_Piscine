#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    // type animal vide
    std::cout << "WrongAnimal: Constructor by default called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): 
_type(type)
{
    // type animal initialisé avec la valeur de notre choix
    std::cout << "WrongAnimal: Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal:: WrongAnimal( const WrongAnimal &copy )
{
    std::cout << "WrongAnimal: Constructor by copy called" << std::endl;
    *this = copy;
}

//opérateur de surcharge pour l'assignation 
WrongAnimal   &WrongAnimal::operator=( WrongAnimal const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return(this->_type);
}

void    WrongAnimal::makeSound( void )const
{
    std::cout << "I can't hear any animal sound..." << std::endl;
}