#include <iostream>
#include <string>
#include "phonebook.hpp"


Phonebook::Phonebook(void) { //constructor
    cout << "Constructor called" << endl;
    return;
}

Phonebook::~Phonebook( void ){ //destructor
    cout << "Destructor called" << endl;
    return;
}

//Contact::Contact(string p1, string p2, string p3, string p4, string p5) :
  //      firstName(p1), lastName(p2), nickname(p3), phoneNumber(p4), darkestSecret(p5)
Contact::Contact(void)
{
    /*cout << "Constructor called" << endl;*/
    return;
}

Contact::~Contact( void ){ //destructor
   // cout << "Destructor called" << endl;
    return;
}

void    Phonebook::searchContact(Contact repertoire[8]){

    int index;
// gérer l'affichage de maniere efficace
    for (int i = 0;  i < 8; i++)
    {
        cout << i << "   |     " << repertoire[i].firstName ;
        cout << "  |  " << repertoire[i].lastName << "  |  " << repertoire[i].nickname << endl;
    }
    cout << "Enter index between 0 and 7 for he contact you want" << endl;
    cin >> index;
    // gerer si l'index indiqué n'est pas un chiffre en 0 et 7
    // si c'est ok afficher le contact
    if (index > 0 && index < 8)
    {
        cout << "Firstname = " << repertoire[index].firstName << endl;
        cout << "Lastname = " << repertoire[index].lastName << endl;
        cout << "nickname = " << repertoire[index].nickname << endl;
        cout << "phone number = " << repertoire[index].phoneNumber << endl;
        cout << "Darkest secret = " << repertoire[index].darkestSecret << endl;
    }
    else
        cout << "error: invalid index" << endl;
    return;
}

void   Phonebook::addContact(Contact person)  {

    cout << "AddContact fct called" << endl ;
    (void)person;
    return;
}

int main(){

    int ret(-1);
    int it(0);
    string cmd("");
    Phonebook repertoire;
   
    for(int i = 0; i < 8; i++) 
      repertoire.new_repertoire[i].setX(i); // initialization du tableau de contacts
    
    cin >> cmd;
    while ((ret = cmd.compare("EXIT")) != 0)
    {
        if ((ret = cmd.compare("ADD")) == 0)
        {
            cout << "First Name : " << endl; cin >> repertoire.new_repertoire[it].firstName;
            cout << "Last Name : " << endl; cin >> repertoire.new_repertoire[it].lastName;
            cout << "Nickname : " << endl; cin >> repertoire.new_repertoire[it].nickname;
            cout << "Phone number : " << endl; cin >> repertoire.new_repertoire[it].phoneNumber;
            cout << "Darkest secret : " << endl; 
            cin.ignore(); getline(cin, repertoire.new_repertoire[it].darkestSecret);
            it++;
        }
        if ((ret = cmd.compare("SEARCH")) == 0)
        {
            repertoire.searchContact(repertoire.new_repertoire); // appel de la fonction qui search un contact
            cin >> cmd;
        }
        else
        {
            cin >> cmd;
        }
    }
    return (0);
}