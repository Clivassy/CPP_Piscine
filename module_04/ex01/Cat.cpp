#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    // constructeur par défaut
    this->brain = new Brain;
    std::cout << "Cat: Constructor called" << std::endl;
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

void    Cat::makeSound( void )const
{
    std::cout << "Miaou Miaou" << std::endl;
}

void    Cat::getIdea(int index)const
{
    std::cout << this->brain->ideas[index] << std::endl;
}