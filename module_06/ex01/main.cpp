#include <iomanip>
#include <iostream>
#include <stdint.h>

struct Data
{
    int nb;
    char c;
    bool isValid;
    void *ptr;
    std::string str;
};

/*-------------------------------------------------------------------------------
PQ reinterpret_cast : 
-> Impossible de convertir un pointeur vers un unsigned long avec un static cast.
-> Impossible d'utiliser un cast implicite du genre : uintptr_t s = (uintptr_t)(void*)ptr.

CMT fonctionne reinterpret cast ici:
-> Récupere la valeur hexadecimale stockee par la variable ptr.
-> Reinterprete l'adresse en mémoire de ptr comme étant l'adresse d'une variable d'un unsigned.

----------------------------------------------------------------------------------*/
uintptr_t serialize(Data* ptr)
{
    uintptr_t newPtr = reinterpret_cast<uintptr_t>(ptr);
    return(newPtr);
}

/*-------------------------------------------------------------------------------
CMT fonctionne reinterpret cast ici:
-> Récupere la valeur hexadecimale stockee par la variable raw.
-> Reinterprete l'adresse en mémoire de raw comme étant l'adresse d'une structure Data.
----------------------------------------------------------------------------------*/
Data* deserialize(uintptr_t raw)
{
    Data* ptr = reinterpret_cast<Data*>(raw);
    return(ptr);
}

void    printDataContent( Data *data )
{
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "string: " << data->str << std::endl;
    std::cout << "int: " << data->nb << std::endl; 
    std::cout << "char: " << data->c << std::endl; 
    std::cout << "bool: " << data->isValid << std::endl;
    std::cout << "ptr: " << data->ptr << std::endl;  
    std::cout << "-----------------------------------------" << std::endl;
}

void    initializeData( Data *data )
{

    data->nb = 125;
    data->c = 'J';
    data->ptr = NULL;
    data->isValid = false;
    data->str = "Random string";
}

int main()
{
    Data *data = new Data;

    initializeData(data);
    printDataContent(data);
    // utilise serialize sur l'adresse de l'objet Data
    uintptr_t ptr = serialize(data);
    std::cout << "After cast uintptr_t : " << ptr << std::endl;
    // Je passe la valeur de retour (ptr) a deserialize et
    // Le pointeur doit etre identique au pointeur d'origine
    std::cout << "Ptr after recast to Data* : " << deserialize(ptr) << std::endl; //must be identical to 'data' ptr
    // le contenu stockee a l'adresse de ptr doi etre identique a celui de data 
    printDataContent(deserialize(ptr));
}