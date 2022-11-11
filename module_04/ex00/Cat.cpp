#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{  
    std::cout << this->_type << ": Constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->_type << ": Destructor called" << std::endl;
}

void    Cat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}