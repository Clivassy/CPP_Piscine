#ifndef PHONEBOOK_H
#define PHONEBOOK_H

using namespace std;

class Phonebook {

    private:

    public:

    int repertoire[8];
    Phonebook(Contact contact); // constructor
    ~Phonebook(void); // destructor
};

class Contact {

    private:
    
    string firstName;
    string lastName;
    string nickname;
    string phoneNumber;
    string darkestSecret;

    public:

    int res;
    string command;
    void    getCommand(string p1);
    Contact(string p1, string p2, string p3, string p4, string p5); // constructor
    ~Contact(void); // destructor
};
#endif