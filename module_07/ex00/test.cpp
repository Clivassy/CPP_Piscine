#include <iostream>
/*
int max(int x, int y) // version typée (a l'ancienne )
{
    if (x >= y)
        return (x);
    return (y);
}
*/
// pour indiquer au compilateur qu'il va s'agir d'un template
// j'annonce que je fais un template qui sera un type que j'appelle T et qui pourra 
// etre n'imorte quel type
template< typename T> 

// version template : interessant de les prende par reference et non par copie
// si jamais c'est une grosse classe elle sera passée par adresse  : on gagne de la place en memoire

// + on ne va pas modifier les instances donc elles seront :const 
T const & max(T const & x, T const & y) 
{
    if (x >= y)
        return (x);
    else
        return (y);
}
// on retourne une reference sur une instance constante

/* 
- Utilisation des templates necessite une instanciation qui peut etre :
-> explicite 
-> implicite
*/

int main()
{
    int a = 21;
    int b = 42;

    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max<int>( a, b ) << std::endl; // instanciation explicite
    std::cout << "Max of " << a << " and " << b << " is ";
    std::cout << max( a, b ) << std::endl; // instanciation implicite

    
}