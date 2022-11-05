#include "Brain.hpp"
#include <time.h>
#include <cstdlib>

std::string randomIdeas[15] = 
{
	"AU COMMENCEMENT, Dieu créa le ciel et la terre",
	"La terre était informe et vide, les ténèbres étaient au-dessus de l’abîme et le souffle de Dieu planait au-dessus des eaux.",
	"Dieu dit : « Que la lumière soit. » Et la lumière fut",
	" Dieu vit que la lumière était bonne, et Dieu sépara la lumière des ténèbres",
	"Dieu appela la lumière « jour », il appela les ténèbres « nuit ». Il y eut un soir, il y eut un matin : premier jour.",
	"Et Dieu dit : « Qu’il y ait un firmament au milieu des eaux, et qu’il sépare les eaux",
	"Dieu fit le firmament, il sépara les eaux qui sont au-dessous du firmament et les eaux qui sont au-dessus. Et ce fut ainsi",
	"Dieu appela le firmament « ciel ». Il y eut un soir, il y eut un matin : deuxième jour.",
    "Il y eut un soir, il y eut un matin : troisième jour.",
    "et qu’ils soient, au firmament du ciel, des luminaires pour éclairer la terre. » Et ce fut ainsi.",
    "Dieu les plaça au firmament du ciel pour éclairer la terre,",
    "Il y eut un soir, il y eut un matin : quatrième jour.",
    "Il y eut un soir, il y eut un matin : cinquième jour.",
    "Joseph se pencha sur le visage de son père, le couvrit de larmes et l’embrassa.",
    "Les fils de Jacob agirent pour lui comme il l’avait ordonné."
};

Brain::Brain( void )
{
    std::srand(time(NULL));
	for( int i = 0 ; i < 100 ; i++ )
		this->ideas[i] = randomIdeas[rand() % 8];
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