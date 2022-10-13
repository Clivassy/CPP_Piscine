#include <iostream>
#include <cstring>
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

Contact::Contact(string p1, string p2, string p3, string p4, string p5) :
        firstName(p1), lastName(p2), nickname(p3), phoneNumber(p4), darkestSecret(p5)
{
    cout << "Constructor called" << endl;
    cout << "Firstname = " << this->firstName << endl;
    cout << "Lastname = " << this->lastName<< endl;
    cout << "nickname = " << this->nickname << endl;
    cout << "phone number = " << this->phoneNumber << endl;
    cout << "Darkest secret = " << this->darkestSecret << endl;
    this->getCommand("");
    this->res = -1;
    cout << "Res = " << this->res << endl;
    return;
}

Contact::~Contact( void ){ //destructor
    cout << "Destructor called" << endl;
    return;
}

void    Phonebook::function(void)
{
    cout << "Function of Phonebook is called" << endl;
    return;
}

void    Contact::getCommand(string cmd){

    if ((res = cmd.compare("ADD")) == 0)
    {
        cout << "Command is ADD" << endl;
        Contact newContact("", "", "", "", "");
        cout << "First Name : " << endl;
        cin >> newContact.firstName;
    }
    else if ((res = cmd.compare("SEARCH")) == 0)
        cout << "Command is SEARCH" << endl;
    else if ((res = cmd.compare("EXIT")) == 0)
        cout << "Command is EXIT" << endl;
    else
        cout << "Command is other" << endl;
    return;
}

int main(){

    Contact contact("", "", "", "", "");
    Phonebook repertoire(contact);

    while (instance.res != 0)
    {
        cin >> instance.command;
        instance.getCommand(instance.command);
        cout << endl;
        instance.res = instance.command.compare("EXIT");
    }


   // Phonebook instance('J', 25);
    //cout << "instance.number = " << instance.number << endl;
  //  cout << "Wow, tu as " << instance.number <<  " ans!" << endl;
  //  Contact contact("Julia", "Batoro", "Julio", "0667120948", "never watch harry Potter");
 
    return (0);
}