#include "AAnimal.hpp"

AAnimal::AAnimal( void ): _type("Unknown")
{
    // type AAnimal vide
    std::cout << "AAnimal: Constructor by default called" << std::endl;
}

AAnimal::AAnimal( std::string type ): 
_type(type)
{
    // type AAnimal initialisé avec la valeur de notre choix
    std::cout << "AAnimal: Constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
    std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal:: AAnimal( const AAnimal &copy )
{
    std::cout << "AAnimal: Constructor by copy called" << std::endl;
    *this = copy;
}

//opérateur de surcharge pour l'assignation 
AAnimal   &AAnimal::operator=( AAnimal const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

std::string AAnimal::getType( void ) const
{
    return(this->_type);
}

void    AAnimal::makeSound( void )const
{
    std::cout << "I can't hear any AAnimal sound..." << std::endl;
}

void    AAnimal::getIdea(int index)const
{
    (void)index;
}