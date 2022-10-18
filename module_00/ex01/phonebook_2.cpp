#include "Phonebook.hpp"

void			Phonebook::my_exit(int exit)
{
	this->exit = 1;
	std::cout << YELLOW "Phonebook is closed and you have lost your contacts forever" << std::endl;
}

void			Phonebook::required_fields(std::string &field, std::string const &str)
{
	int			ret = 1;

	while (ret)
	{
		std::cout << CYN "\tAdd Your " << str <<  "\n\t ➜";
		getline(std::cin, field);
		ret = field.empty();
		if (ret)
			std::cout << RED "Required Fields :" << std::endl;
	}
}

void			Phonebook::add_contact(void)
{
	if (this->id < MAX_CONTACTS)
	{
		this->required_fields(this->repertoir[this->id].first_name, "First name");
		this->required_fields(this->repertoir[this->id].last_name, "Last name");
		this->required_fields(this->repertoir[this->id].nickname, "Nick Name");
		this->required_fields(this->repertoir[this->id].login, "Login");
		this->required_fields(this->repertoir[this->id].email_address, "Email Address");
		this->required_fields(this->repertoir[this->id].postal_address, "Postal Address");
		this->required_fields(this->repertoir[this->id].phone_number, "Phone Number");
		this->required_fields(this->repertoir[this->id].birthday_date, "Birthday Date");
		this->required_fields(this->repertoir[this->id].favorite_meal, "Favorite Meal");
		this->required_fields(this->repertoir[this->id].underwear_color, "Underwear Color");
		this->required_fields(this->repertoir[this->id].darkest_secret, "Darkest Secret");
		this->id += 1;
	}
	else
		std::cout << RED "Repertoir is full" << "\n";
}
/*
** print one field 
** this function deal width 
*/
void			Phonebook::print_field(std::string const &str)
{
	std::cout <<  "|";
	if (str.length() <= FIELD_WIDTH)
	{
		std::cout << std::setfill(' ') << std::setw(FIELD_WIDTH);
		std::cout << str;
	}
	else
	{
		for (int i = 0; i < FIELD_WIDTH; i++)
			std::cout << str[i];
		std::cout << ".";
	}
}

/*
** the is to print all entirely repertoire exemple:
** |xxxxxxxxx1|xxxxxxxxxa|xxxxxxxxxa|xxxxxxxxxa|
** |xxxxxxxxx2|xxxxxxxxxb|xxxxxxxxxb|xxxxxxxxxb|
** |xxxxxxxxx3|xxxxxxxxxc|xxxxxxxxxc|xxxxxxxxxc|
**	   ...		  ...		 ...		... 
** each call of "print_field"  print one column : |xxxxxxxxx1|
**		exemple :
**			first 	 call 	print : |xxxxxxxxx1|
**			second   call	print : |xxxxxxxxxa|
**			third 	 call	print : |xxxxxxxxxa|
**				..					...
*/
void			Phonebook::print_repertoir(void)
{
	std::string id;

	for (int i = 0; i < this->id; i++)
	{
		id = std::to_string(i + 1);
		this->print_field(id);
		this->print_field(this->repertoir[i].first_name);
		this->print_field(this->repertoir[i].last_name);
		this->print_field(this->repertoir[i].nickname);
		std::cout << "|" << std::endl;
	}
}

/*
** display all informations about id user in the repertoire
*/

void			Phonebook::print_info_contact(int &id)
{
	std::cout << GRN << this->repertoir[id].first_name << std::endl;
	std::cout << GRN << this->repertoir[id].last_name << std::endl;
	std::cout << GRN << this->repertoir[id].nickname << std::endl;
	std::cout << GRN << this->repertoir[id].login << std::endl;
	std::cout << GRN << this->repertoir[id].postal_address << std::endl;
	std::cout << GRN << this->repertoir[id].email_address << std::endl;
	std::cout << GRN << this->repertoir[id].phone_number << std::endl;
	std::cout << GRN << this->repertoir[id].birthday_date << std::endl;
	std::cout << GRN << this->repertoir[id].favorite_meal << std::endl;
	std::cout << GRN << this->repertoir[id].underwear_color << std::endl;
	std::cout << GRN << this->repertoir[id].darkest_secret << std::endl;
}

void			Phonebook::get_index(int &index)
{
	bool		boolean;

	std::cout << YELLOW "Enter an index to pick a contact \n➜";
	do
	{
		std::cin >> index;
		index -= 1; 
		boolean = std::cin.good();
		if (boolean != true)
			std::cout << RED "Bad index \n➜";
		std::cin.clear();
		if (index > this->id || index < 0)
			boolean = false;
	} while (boolean != true);	
}

void			Phonebook::search(void)
{
	int			index;

	if (this->id == 0)
		std::cout << YELLOW "The repertoir it empty\n" << std::endl;
	else
	{
		this->print_repertoir();
		this->get_index(index);
		this->print_info_contact(index);
	}
}
 ///////////////////////// main.c /////////////////////////////////

 #include "Phonebook.hpp"
#include <iostream>  

int main(int argc, const char** argv) 
{
	std::string	command;
	Phonebook phonebook(0);
	while (!phonebook.exit)
	{
		std::cout << CYN "Enter Command : ADD, SEARCH, EXIT\n\t ➜";
		getline(std::cin, command);
		if (!command.compare("ADD"))
		{
			phonebook.add_contact();
		}
		else if (!command.compare("SEARCH"))
			phonebook.search();
		else if (!command.compare("EXIT"))
			phonebook.my_exit(1);
	}
	return (0);
}