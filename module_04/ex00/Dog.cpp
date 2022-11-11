#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{ 
    std::cout << this->_type << ": Constructor called" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << this->_type << ": Destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}