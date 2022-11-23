#include "Base.hpp"

Base::Base( void ){ }
Base::~Base( void ){ }

Base *generate( void )
{
    bool seed(false);

    if (seed == false){
        srand (time(NULL));
        seed = true;
    }
    switch (rand() % 3){
        case (0):
        {
           return new A; 
        }
        case (1):
        {
            return new B;
        }
        default:
            return new C; 
    }
}

/*-------------------------------------------------------------------------------
- If dynamic_cast is successful : will returns a value.
- If not : It will return NULL.
-> If we get a NULL trying to downcast : objet type is not the good one
-------------------------------------------------------------------------------*/
void identify(Base* p)
{

    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Objet is derived Base from: Class A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Objet is derived Base from: Class B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Objet is derived Base from: Class C" << std::endl;
    else
        std::cout << "Unknown Class" << std::endl;
}

/*--------------------------------------------------------------
- Need first to check if the cast can be made with dynamic_cast
- If  it failed : it will return bad cast exception : need to catch it in try/catch
- If dynamic_cast is successful : will returns a value.
- Need to try all cases and print no messages if catching
------------------------------------------------------------------*/
void identify(Base& p)
{
    Base &checker = p;

    try
    {   
        checker = (dynamic_cast<A&>(p)); 
        std::cout << "Objet is derived Base from: Class A" << std::endl;
        return;
    }
    catch(const std::exception& e){ }
    try
    {
        checker = (dynamic_cast<B&>(p));
        std::cout << "Objet is derived Base from: Class B" << std::endl;
        return;
    }
    catch(const std::exception& e){ }
    try
    {
        checker = (dynamic_cast<C&>(p));
        std::cout << "Objet is derived Base from: Class C" << std::endl;
        return;
    }
    catch(const std::exception& e){ }
}