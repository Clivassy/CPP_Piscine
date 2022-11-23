#include "Base.hpp"

int main()
{
    Base *Obj = NULL;

    Obj = generate();
    
    Base &Obj2 = *Obj;
    
    identify(Obj);
    identify(Obj2);
}