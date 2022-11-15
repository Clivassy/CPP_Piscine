#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : _type("Cat")
{ 
    std::cout << this->_type << ": Cat constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << ": Cat destructor called" << std::endl;
}

std::string WrongCat::getType( void ) const
{
    return(this->_type);
}

void    WrongCat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}