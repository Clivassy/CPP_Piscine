#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ): Animal("Dog")
{ 
    this->_brain = new Brain;
    std::cout << this->_type << ": Constructor called" << std::endl;
}

Dog:: Dog( const Dog &copy ): Animal( copy )
{
    std::cout <<  this->_type << ": Constructor by copy called" << std::endl;
    *this = copy;
}

Dog   &Dog::operator=( Dog const &copy )
{
    this->_type = copy.getType();
    delete this->_brain;
    this->_brain = new Brain(*copy.getBrain());
    return (*this);
}

Dog::~Dog( void )
{
    delete this->_brain;
    std::cout << this->_type << ": Destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}

Brain*  Dog::getBrain( void )const
{
    return(this->_brain);
}

void    Dog::printIdeas( int index )const
{
    std::cout << this->_brain->getIdea(index) << std::endl;
}