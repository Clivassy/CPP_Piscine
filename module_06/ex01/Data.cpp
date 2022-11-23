#include "Data.hpp"

// Initialize Data structure with some random value (use to test only)
void    initializeData( Data *data )
{

    data->nb = 125;
    data->c = 'J';
    data->ptr = NULL;
    data->isValid = false;
    data->str = "Random string";
}
/*-------------------------------------------------------------------------------
PQ reinterpret_cast : 
-> Impossible de convertir un pointeur vers un unsigned long avec un static cast.
-> Impossible d'utiliser un cast implicite du genre : uintptr_t s = (uintptr_t)(void*)ptr.

CMT fonctionne reinterpret cast ici:
-> Récupere la valeur hexadecimale stockee par la variable ptr.
-> Réinterprete l'adresse en mémoire de ptr comme étant l'adresse d'une variable d'un unsigned.

----------------------------------------------------------------------------------*/
uintptr_t serialize( Data* ptr )
{
    uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);
    return(newPtr);
}

/*-------------------------------------------------------------------------------
CMT fonctionne reinterpret cast ici:
-> Récupere la valeur hexadecimale stockee par la variable raw.
-> Reinterprete l'adresse en mémoire de raw comme étant l'adresse d'une structure Data.
----------------------------------------------------------------------------------*/
Data* deserialize( uintptr_t raw )
{
    Data* ptr = reinterpret_cast<Data*>(raw);
    return(ptr);
}

void    printDataContent( Data *data )
{
    std::cout <<  "-----------------------------------------" << std::endl;
    std::cout << "string: " << data->str << std::endl;
    std::cout << "int: " << data->nb << std::endl; 
    std::cout << "char: " << data->c << std::endl; 
    std::cout << "bool: " << data->isValid << std::endl;
    std::cout << "ptr: " << data->ptr << std::endl;  
    std::cout << "-----------------------------------------" << std::endl;
}