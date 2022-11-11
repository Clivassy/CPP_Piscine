#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{ 
    this->brain = new Brain;
    std::cout << this->_type << ": Constructor called" << std::endl;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << this->_type << ": Destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}

void    Dog::getIdea(int index)const
{
    std::cout << this->brain->ideas[index] << std::endl;
}