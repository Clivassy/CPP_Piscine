#include <iostream>
#include "phonebook.hpp"


Phonebook::Phonebook(char p1, int p2) : a1(p1), a2(p2) { //constructor
    cout << "Constructor called" << endl;
    cout << "this->a1 = " << this->a1 << endl;
    cout << "this->a2 = " << this->a2 << endl;
    //this->number = 0;  // this == pointeur qui pointe sur l'instance courante
    //cout << "Hello, quel age tu as ?" << endl;
   // cin >> this->number;
    this->function(); // appel de ma fct;
    return;
}

Phonebook::~Phonebook( void ){ //destructor
    cout << "Destructor called" << endl;
    return;
}

void    Phonebook::function(void)
{
    cout << "Function of Phonebook is called" << endl;
    return;
}

int main(){
   // Phonebook instance;
    Phonebook instance('J', 25);
    //cout << "instance.number = " << instance.number << endl;
  //  cout << "Wow, tu as " << instance.number <<  " ans!" << endl;

    return (0);
}