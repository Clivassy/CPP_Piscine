#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <bits/stdc++.h>
#include "phonebook.hpp"

Phonebook::Phonebook(void) { //constructor
  //  cout << "Constructor called" << endl;
    this->it = 0;
    return;
}

void Phonebook::printContact(int index)
{
    if (this->repertoire[index].firstName[0] == '\0')
    {
        cout << "No contact register to this index" << endl;
        return;
    }
    else
    {
        cout << "First Name : " << this->repertoire[index].firstName << endl;
        cout << "Last Name : " << this->repertoire[index].lastName << endl;
        cout << "Nickname : " << this->repertoire[index].nickname << endl;
        cout << "Phone number : " << this->repertoire[index].phoneNumber << endl;
        cout << "Darkest secret : " << this->repertoire[index].darkestSecret << endl;
    }
    return;
}

void			Phonebook::printRepertoire(string str)
{
	cout <<  "|";
	if (str.length() <= 10)
	{
		cout << setfill(' ') << setw(10);
		cout << str;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			cout << str[i];
		cout << ".";
	}
}


void    Phonebook::searchContact(void){

    string id;
    bool index_is_good;
    stringstream ss;

    index_is_good = ss.good();
    cout << "is stream good: " << index_is_good << endl;


	/*for (int i = 0; i < this->it; i++)
	{
		id = to_string(i + 1);
		this->printRepertoire(id);
		this->printRepertoire(this->repertoire[i].firstName);
		this->printRepertoire(this->repertoire[i].lastName);
		this->printRepertoire(this->repertoire[i].nickname);
		cout << "|" << endl;
	}
    cout << "Please enter the id of the contact you want informations : " << endl;

    }*/
   /* while (1)
    {   
        if (index)
        {
            this->printContact(index);
            break;
        }
        else
        {
            cout << "Wrong input: enter index between 0 and 7" << endl;
            index = 0;
            cin >> index;
        }
    }*/
    return;
}

void   Phonebook::addContact(void)  {

    if (this->it < 8)
    {
        //cout << "AddContact fct called" << endl ;
        cout << "First Name : " << endl; cin.ignore(); getline(cin, this->repertoire[it].firstName);
        cout << "Last Name : " << endl; getline(cin, this->repertoire[it].lastName);
        cout << "Nickname : " << endl; getline(cin, this->repertoire[it].nickname);
        cout << "Phone number : " << endl; getline(cin, this->repertoire[it].phoneNumber);
        cout << "Darkest secret : " << endl; getline(cin, this->repertoire[it].darkestSecret);
        this->it += 1;
    }
    else if (this->it > 7)
    {
        cout << "Oops..Phonebook is full. Last contact will be replaced by new one." << endl;
        cout << "First Name : " << endl; cin.ignore(); getline(cin, this->repertoire[7].firstName);
        cout << "Last Name : " << endl; getline(cin,this->repertoire[7].lastName);
        cout << "Nickname : " << endl;  getline(cin, this->repertoire[7].nickname);
        cout << "Phone number : " << endl; getline(cin, this->repertoire[7].phoneNumber);
        cout << "Darkest secret : " << endl; getline(cin, this->repertoire[7].darkestSecret);
    }
    return;
}

int main(int ac, char *av[]){

    (void)ac;
    (void)av;
    int ret(-1);
    string cmd("");

    Phonebook new_repertoire;
    
    cin >> cmd;
    while ((ret = cmd.compare("EXIT")) != 0)
    {
        if ((ret = cmd.compare("ADD")) == 0)
        {
            new_repertoire.addContact();
        }
        if ((ret = cmd.compare("SEARCH")) == 0)
        {
        new_repertoire.searchContact();
            cin >> cmd;
        }
        else
        {
            cin >> cmd;
        }
    }
    return (0);
}

/* 
void	PhoneBook::search(){

	std::string	str;
	int	index;
	
	if (this->_c_num == 0){
		
		std::cout << "NO CONTACT RECORDED !" << std::endl;
		std::cout << std::endl;			
		return;
	}
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for(int j = 0; j < this->_c_num; j++){
			
		std::cout << std::right << std::setw(10) << j + 1 << "|";
		for (int i = 0; i < 3; i++){
			str = this->_book[j].get_info(i);
			if (str.length() > 10)
				str = str.substr(0, 9) + '.';				
			std::cout << std::right << std::setw(10) << str << "|";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	while (1){
		std::cout << "Which one ?" << std::endl;
		std::cout << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (str.length() > 1 || str[0] < '1' || std::atoi(str.c_str()) > this->_c_num){
			std::cout << std::endl;
			std::cout << "NOT A CONTACT !" << std::endl;
			std::cout << std::endl;			
			continue;
		}
		break;
	}
	std::cout << std::endl;
	index = std::atoi(str.c_str()) - 1;
	for (int i = 0; i < 5; i++)
		std::cout << this->_book[index].get_info(i) << std::endl;
	std::cout << std::endl;
	return;
}*/