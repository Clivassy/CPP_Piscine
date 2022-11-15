#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{ 
    std::cout << this->_type << ": Dog constructor called" << std::endl;
}

Dog:: Dog( const Dog &copy )
{
    std::cout <<  this->_type << ": Dog constructor by copy called" << std::endl;
    *this = copy;
}

Dog   &Dog::operator=( Dog const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

Dog::~Dog( void )
{
    std::cout << this->_type << ": Dog destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}