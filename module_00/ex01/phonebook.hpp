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
//    Contact(void);
  //  ~Contact(void); // destructor
};

class Phonebook{


    public:
    int it;
    Phonebook(void); // constructor
  //  ~Phonebook(void); // destructor
    Contact repertoire[8];
    void    addContact(void);
    void    searchContact(void);
    void    printRepertoire(string str);
    void    printContact(int index);
};

#endif