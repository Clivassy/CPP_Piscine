#ifndef CONTACT_H
#define CONTACT_H

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

    private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

    public:
    std::string getContact(int info);
    void        setContact(std:: string info, int id);
    Contact(void); // constructor
    ~Contact(void); // destructor
};
#endif