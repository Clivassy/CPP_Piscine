#include "AAnimal.hpp"

AAnimal::AAnimal( void ): _type("Unknown")
{
    std::cout << this->_type << ": Constructor by default called" << std::endl;
}

AAnimal::AAnimal( std::string type ): _type(type)
{
    std::cout << this->_type << ": Constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
    std::cout << this->_type << "AAnimal: Destructor called" << std::endl;
}

AAnimal:: AAnimal( const AAnimal &copy )
{
    std::cout << "AAnimal: Constructor by copy called" << std::endl;
    *this = copy;
}

AAnimal   &AAnimal::operator=( AAnimal const &copy )
{
    this->_type = copy.getType();
    return (*this);
}

std::string AAnimal::getType( void ) const
{
    return(this->_type);
}

void    AAnimal::makeSound( void )const
{
   
}

void    AAnimal::getIdea(int index)const
{
    (void)index;
}