#include "Brain.hpp"
#include <time.h>
#include <cstdlib>

std::string randomIdeas[10] = 
{
	"Hello Brian",
    "Hello Julia",
    "Hello Tom",
    "Hello Louis",
    "Hello Emma",
    "Hello Jean",
    "Hello Lisa",
    "Hello Théo",
    "Hello Mathis",
    "Hello Arzu",
};

Brain::Brain( void )
{
	for( int i = 0 ; i < 100 ; i++ )
		this->_ideas[i] = randomIdeas[rand() % 10];
    std::cout << "Brain: Constructor called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
    *this = copy;
    std::cout << "Brain: constructor by copy called" << std::endl;
} 

Brain::~Brain( void )
{
    std::cout << "Brain: destructor called" << std::endl;
}

void    Brain::operator=( Brain const &toCopy )
{
    for (int i = 0; i < 100 ; i++)
    {
        this->_ideas[i] = toCopy._ideas[i];
    }
}

std::string    Brain::getIdea( int index )
{
    return( this->_ideas[index] );
}