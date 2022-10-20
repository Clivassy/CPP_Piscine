#include "phonebook.hpp"

Phonebook::Phonebook(void) 
{
    this->idContact = 0;
    this->exit = 0;
    return;
}

Phonebook::~Phonebook( void )
{ 
    // destructor
    // Nothing to free here
}

Contact::Contact(void)
{ 
    // constructor
    // Nothing to initialiaze here
}

Contact::~Contact( void )
{ 
    // destructor
    // Nothing to free here
}

void    Phonebook::exitPhonebook(int exit)
{
    std::cout << YELLOW "Closing phonebook ➜ all contacts will be lost." CLEAR << std::endl;
    this->exit = exit;
    return;
}

void Phonebook::printContact(int index)
{
    if (index + 1 > this->idContact)
    {
        std::cout << RED "No contact register to this index, SEARCH again with correct index" CLEAR << std::endl;
        return;
    }
    else
    {
        std::cout << CYAN "First Name : " << this->repertoire[index].firstName << std::endl;
        std::cout << "Last Name : " << this->repertoire[index].lastName << std::endl;
        std::cout << "Nickname : " << this->repertoire[index].nickname << std::endl;
        std::cout << "Phone number : " << this->repertoire[index].phoneNumber << std::endl;
        std::cout << "Darkest secret : " << this->repertoire[index].darkestSecret << CLEAR << std::endl;
    }
    return;
}

void			Phonebook::printRepertoire(std::string str)
{
	std::cout <<  "|";
	if (str.length() <= 10)
	{
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}


void    Phonebook::searchContact(void){

    std::string str;
    char id;
    int index(0);

    if (this->idContact == 0)
    {	
		std::cout <<  RED "Oops..Empty phonebook. Add some contact" CLEAR << std::endl;	
		return;
	}
    std::cout << std::endl;
    std::cout << GREEN " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
    std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < this->idContact; i++)
	{
        id = i + '0' + 1;
        std::cout << "|        " << id; 
		this->printRepertoire(this->repertoire[i].firstName);
		this->printRepertoire(this->repertoire[i].lastName);
		this->printRepertoire(this->repertoire[i].nickname);
		std::cout << "|"  << std::endl;
	}
    std::cout << std::endl;
    while (1)
    {
        std::cout << CLEAR  "Please enter the id of the contact you want informations :" << std::endl;
        std::getline(std::cin, str);
        if (std::cin.eof())
        {
            this->exit = 1;
            return;
        }
        else if (str.size() > 1 || str[0] < '1' || std::atoi(str.c_str()) == 0)
        {
            std::cout << RED "Oops..invalid index" CLEAR << std::endl;
        }
        else
        {
	        index = std::atoi(str.c_str()) - 1;
            this->printContact(index);
            break;
        }
    }
    return;
}

/*void   Phonebook::fillContact(int index){

    switch(index)
    {
        case 0:
            return (this->repertoire[idContact].firstName)
    }
}

void   Phonebook::addContact(void)  {

    const char* infos[5];
    int i(0);
    while (i < 5)
    {
        getline(std::cin, info[i]);
        if (info[i])
        {
            this->fillContact(i);
            i++;
        }      
    }
}*/


void   Phonebook::addContact(void)  {

    if (this->idContact < 8)
    {
        std::cout << "First Name : " << std::endl;getline(std::cin, this->repertoire[idContact].firstName);
        std::cout << "Last Name : " << std::endl; getline(std::cin, this->repertoire[idContact].lastName);
        std::cout << "Nickname : " << std::endl; getline(std::cin, this->repertoire[idContact].nickname);
        std::cout << "Phone number : " << std::endl; getline(std::cin, this->repertoire[idContact].phoneNumber);
        std::cout << "Darkest secret : " << std::endl; getline(std::cin, this->repertoire[idContact].darkestSecret);
        this->idContact += 1;
    }
    else if (this->idContact > 7)
    {
        std::cout << RED "Oops..Phonebook is full. Last contact will be replaced by new one." CLEAR << std::endl;
        std::cout << "First Name : " << std::endl; getline(std::cin, this->repertoire[7].firstName);
        std::cout << "Last Name : " << std::endl; getline(std::cin,this->repertoire[7].lastName);
        std::cout << "Nickname : " << std::endl;  getline(std::cin, this->repertoire[7].nickname);
        std::cout << "Phone number : " << std::endl; getline(std::cin, this->repertoire[7].phoneNumber);
        std::cout << "Darkest secret : " << std::endl; getline(std::cin, this->repertoire[7].darkestSecret);
    }
    return;
}

int main(void){

    std::string cmd("");

    Phonebook newRepertoire;
    std::cout << YELLOW "|-------------------------------|" << std::endl;
    std::cout << "|     WELCOME ON PHONEBOOK      |" << std::endl;
    std::cout << "|-------------------------------|" << std::endl;
    std::cout << "|ADD    ➜       Adding Contacts |" << std::endl;
    std::cout << "|SEARCH ➜       Search Contact  |" << std::endl;
    std::cout << "|EXIT   ➜       Quit program    |" << std::endl;
    std::cout << "|-------------------------------|" CLEAR << std::endl;
    while (!newRepertoire.exit)
    {
        getline(std::cin, cmd);
        if (std::cin.eof())
        {
            exit(EXIT_FAILURE);
        }
        else if (!cmd.compare("ADD"))
        {
            newRepertoire.addContact();
        }
        else if (!cmd.compare("SEARCH"))
        {
            newRepertoire.searchContact();
        }
        else if (!cmd.compare("EXIT"))
        {
            newRepertoire.exitPhonebook(1);
        }
    }
    return (0);
}

/* if (std::cin.eof())
    {
        appel du destructor
        + exit(failure);
    }*/