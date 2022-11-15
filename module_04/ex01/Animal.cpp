#include "Animal.hpp"

Animal::Animal( void ): _type("Unknown")
{
    std::cout << this->_type << ": Animal constructor by default called" << std::endl;
}

Animal::Animal( std::string type ): _type(type)
{
    std::cout <<  this->_type << ": Animal constructor called" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << this->_type << ": Animal destructor called" << std::endl;
}

Animal:: Animal( const Animal &copy )
{
    std::cout << this->_type << ": Animal constructor by copy called" << std::endl;
    *this = copy;
}

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
    std::cout << "**Silence**" << std::endl;
}

void    Animal::printIdeas(int index)const
{
    (void)index;
}