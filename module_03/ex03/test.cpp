#include <iostream>
using namespace std; 
// Première classe de base 
class A { 
  public: 
    A() { 
      cout << "Constructeur de la classe A." << endl; 
    } 
}; 
// Deuxième classe de base
class B { 
  public: 
    B() { 
      cout << "Constructeur de la classe B." << endl; 
    } 
}; 
// Sous classe C hérite de deux classes de base A et B
class C: public A, public B { 
  
}; 
  
// main function 
int main() 
{    
    // créer un objet de sous-classe
    // invoque le constructeur des classes de base
    C obj; 
    return 0; 
}