#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{  
    std::cout << this->_type << ": Cat constructor called" << std::endl;
}

Cat:: Cat( const Cat &copy )
{
    std::cout <<  this->_type << ": Cat constructor by copy called" << std::endl;
    *this = copy;
}

Cat   &Cat::operator=( Cat const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

Cat::~Cat( void )
{
    std::cout << this->_type << ": Cat destructor called" << std::endl;
}

void    Cat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}