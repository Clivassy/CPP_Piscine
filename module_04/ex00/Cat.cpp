#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    // constructeur par défaut    
    std::cout << "Cat: Constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "Cat: Destructor called" << std::endl;
}

void    Cat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}