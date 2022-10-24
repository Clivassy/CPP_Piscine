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
        std::cout << "|         " << id; 
		this->printRepertoire(this->repertoire[i].firstName);
		this->printRepertoire(this->repertoire[i].lastName);
		this->printRepertoire(this->repertoire[i].nickname);
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

void   Phonebook::fillContact(std::string &answer, std::string const &question)
{
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
            break;
	}
}

/*void PhoneBook::addContact(void)
{
	if (this->_nbContacts == 8)
	{
		this->_contacts[this->_oldest].setContact(this->_oldest + 1);
		std::cout << RED << "Previous contact No" << this->_oldest + 1
					<< " has been removed !" << RESET << std::endl;
		this->_oldest++;
		if (this->_oldest == 8)
			this->_oldest = 0;
		return ;
	}
	this->_contacts[this->_nbContacts].setContact(this->_nbContacts + 1);
	this->_nbContacts++;
}*/

void   Phonebook::addContact( void ) 
{
    if (this->idContact < 8)
    {
        this->fillContact(this->repertoire[idContact].firstName, "First name");
		this->fillContact(this->repertoire[idContact].lastName, "Last name");
		this->fillContact(this->repertoire[idContact].nickname, "Nick Name");
		this->fillContact(this->repertoire[idContact].phoneNumber, "Phone number");
		this->fillContact(this->repertoire[idContact].darkestSecret, "Darkest secret");
        this->idContact += 1;
    }
    else if (this->idContact == 8)
    {
        this->fillContact(this->_oldestContact].fillContact[_oldestContact + 1],"First name" ;
		std::cout << RED << "Oops..Contact n= " << this->_oldestContact + 1
					<< " has been removed !" << CLEAR << std::endl;
		this->_oldestContact++;
		if (this->_oldestContact == 8)
			this->_oldestContact = 0;
		return ;
    }
    /*else if (this->idContact > 7)
    {
        std::cout << RED "Oops..Phonebook is full. Last contact will be replaced by new one." CLEAR << std::endl;
        this->fillContact(this->repertoire[7].firstName, "First name");
		this->fillContact(this->repertoire[7].lastName, "Last name");
		this->fillContact(this->repertoire[7].nickname, "Nick Name");
		this->fillContact(this->repertoire[7].phoneNumber, "Phone number : ");
		this->fillContact(this->repertoire[7].darkestSecret, "Darkest secret : ");
    }*/
    return;
}

int main(int ac, char **av){

    std::string cmd("");
    Phonebook newRepertoire;

    (void)av;
    if (ac == 1)
    {
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
    }
    else
        std::cout << RED "Usage: ./phonebook" CLEAR << std::endl; 
    return (0);
}