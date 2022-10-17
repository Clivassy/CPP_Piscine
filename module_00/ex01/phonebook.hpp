#ifndef PHONEBOOK_H
#define PHONEBOOK_H

using namespace std;

class Contact {

    public:
    string firstName;
    string lastName;
    string nickname;
    string phoneNumber;
    string darkestSecret;
    int x;
    void setX(int i) { x = i; } 
    Contact(void);
    ~Contact(void); // destructor
};

class Phonebook{


    public:
    Phonebook(void); // constructor
    ~Phonebook(void); // destructor
    Contact new_repertoire[8];
    void    addContact(Contact person);
    void    searchContact(Contact repertoire[8]);
    void    printContact(Contact person);
};

#endif