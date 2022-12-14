#include "Phonebook.hpp"

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
        std::cout << CYAN "First Name : " << this->repertoire[index].getContact(0) << std::endl;
        std::cout << "Last Name : " << this->repertoire[index].getContact(1) << std::endl;
        std::cout << "Nickname : " << this->repertoire[index].getContact(2) << std::endl;
        std::cout << "Phone number : " << this->repertoire[index].getContact(3) << std::endl;
        std::cout << "Darkest secret : " << this->repertoire[index].getContact(4) << CLEAR << std::endl;
    }
    return;
}

void    Phonebook::printRepertoire(std::string str)
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
    int i(-1);
    while (++i < this->idContact && i < 8)
	{
        id = i + '0' + 1;
        std::cout << "|         " << id; 
		this->printRepertoire(this->repertoire[i].getContact(0));
		this->printRepertoire(this->repertoire[i].getContact(1));
		this->printRepertoire(this->repertoire[i].getContact(2));
		std::cout << "|" << std::endl;
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

void   Phonebook::fillContact(std::string question, int index)
{
    std::string answer;
	while (1)
	{
		std::cout << YELLOW "Add your " << question <<  ":\n" CLEAR ;
		getline(std::cin, answer);
        if (std::cin.eof())
        {
            this->exit = 1;
            return;
        }
        if (answer.empty())
            std::cout << RED "Oops..You must fill this field" << std::endl;
        else
        {
            this->repertoire[this->idContact % 8].setContact(answer, index);
            break;
        }
	}
}

void   Phonebook::addContact( void ) 
{
    this->fillContact("First name", 0);
    this->fillContact("Last name", 1);
    this->fillContact("Nickname", 2);
    this->fillContact("Phone number", 3);
    this->fillContact("Darkest Secret", 4);
    this->idContact += 1;
    return;
}
