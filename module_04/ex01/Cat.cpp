#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    this->_brain = new Brain;
    std::cout << this->_type << ": Cat constructor called" << std::endl;
}

Cat:: Cat( const Cat &copy ) : Animal( copy )
{
    std::cout << "Cat: constructor by copy called" << std::endl;
    *this = copy;
}

Cat   &Cat::operator=( Cat const &copy )
{
    this->_type = copy.getType();
   // this->_brain = new Brain(*copy.getBrain());
    return (*this);
}

Cat::~Cat( void )
{
    delete this->_brain;
    std::cout << this->_type << ": Cat destructor called" << std::endl;
}

void    Cat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}

Brain*  Cat::getBrain( void )const 
{
    return(this->_brain);
}

void    Cat::printIdeas( int index )const
{
    std::cout << this->_brain->getIdea(index) << std::endl;
}