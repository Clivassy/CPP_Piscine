#ifndef PHONEBOOK_H
#define PHONEBOOK_H

//------ librairies------------
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <stdlib.h>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------


class Contact {

    public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    Contact(void); // constructor
    ~Contact(void); // destructor
};

class Phonebook{

    private:
    Contact repertoire[8];
    int     idContact;
    int     _oldestContact;

    public:
    void    addContact(void);
    void    searchContact(void);
    void    fillContact(std::string &s1, std::string const &s2);
    void    printRepertoire(std::string str);
    void    printContact(int index);
    void    exitPhonebook(int exit);
    int     exit;
    Phonebook(void); // constructor
    ~Phonebook(void); // destructor
};
#endif