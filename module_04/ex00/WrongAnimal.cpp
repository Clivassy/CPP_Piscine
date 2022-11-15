#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("Unknown")
{
    std::cout << this->_type << ": WrongAnimal constructor by default called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): 
_type(type)
{
    std::cout << this->_type << ": WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << this->_type << ": WrongAnimal Destructor called" << std::endl;
}

WrongAnimal:: WrongAnimal( const WrongAnimal &copy )
{
    std::cout << "WrongAnimal: Constructor by copy called" << std::endl;
    *this = copy;
}

WrongAnimal   &WrongAnimal::operator=( WrongAnimal const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

std::string WrongAnimal::getType( void ) const
{
    return(this->_type);
}

void    WrongAnimal::makeSound( void )const
{
    std::cout << "**Silence**" << std::endl;
}