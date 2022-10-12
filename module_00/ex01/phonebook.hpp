#ifndef PHONEBOOK_H
#define PHONEBOOK_H

using namespace std;

class Phonebook {

    public:

    char a1;
    int a2;
    int number; // attribut de notre classe

    Phonebook(char p1, int p2); // constructor
    ~Phonebook(void); // destructor

    void    function(void);
};

class Contact {

    public:
    
    Contact(void); // constructor
    ~Contact(void); // destructor
};
#endif