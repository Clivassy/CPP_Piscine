#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{ 
    std::cout << "Dog: Constructor called" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << "Dog: Destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}