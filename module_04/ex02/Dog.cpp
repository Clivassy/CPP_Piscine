#include "Dog.hpp"

Dog::Dog( void ): AAnimal("Dog")
{ 
    this->brain = new Brain;
    std::cout << "Dog: Constructor called" << std::endl;
}

Dog:: Dog( const Dog &copy )
{
    std::cout <<  this->_type << ": Constructor by copy called" << std::endl;
    *this = copy;
}

Dog   &Dog::operator=( Dog const &copy )
{
    this->_type = copy.getType();
    return (*this);
}
Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "Dog: Destructor called" << std::endl;
}

void    Dog::makeSound( void )const
{
    std::cout << "Ouaf Ouaf" << std::endl;
}

void    Dog::getIdea(int index)const
{
    std::cout << this->brain->getIdea(index) << std::endl;
}