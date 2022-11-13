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
    std::srand(time(NULL));
	for( int i = 0 ; i < 100 ; i++ )
		this->ideas[i] = randomIdeas[rand() % 10];
    std::cout << "Brain: Constructor by default called" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain: Destructor called" << std::endl;
}

Brain::Brain( const Brain &copy )
{
    *this = copy;
    std::cout << "Brain: Constructor by copy called" << std::endl;
} 

void    Brain::operator=( Brain const &toCopy )
{
    for (int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = toCopy.ideas[i];
    }
}