#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : _type("Cat")
{
    // constructeur par défaut    
    std::cout << "WrongCat: Constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat: Destructor called" << std::endl;
}

std::string WrongCat::getType( void ) const
{
    return(this->_type);
}