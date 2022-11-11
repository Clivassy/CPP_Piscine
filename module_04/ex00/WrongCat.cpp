#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : _type("Cat")
{ 
    std::cout << this->_type << ": Constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << ": Destructor called" << std::endl;
}

std::string WrongCat::getType( void ) const
{
    return(this->_type);
}