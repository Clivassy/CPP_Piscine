#include "Contact.hpp"


class	Contact
{
	public:
		Contact();
		~Contact();
		void	setContact(int ID);
		void	showContactAsList();
		void	displayContact();

	private:
		int					_ID;
		static std::string	_fields[5];
		std::string			_items[5];
};

std::string Contact::_fields[5] = {
	"First name",
	"Last name",
	"Nick name",
	"Phone number",
	"Darkest secret"
};

Contact::Contact()
{
	for (int i = 0; i < 5; i++)
		this->_items[i] = std::string();
}

Contact::~Contact()
{
}

void	Contact::setContact(int ID)
{
	this->_ID = ID;
	std::cout << std::endl << MAGENTA << "Please fill the following form :" << RESET << std::endl;
	for (int i = 0; not std::cin.eof() and i < 5; i++)
	{
		std::cout << BLUE << Contact::_fields[i] << ": " << RESET;
		while (not std::cin.eof() and std::getline(std::cin, this->_items[i]) and this->_items[i].empty())
			std::cout << RED << "Empty field, please try again :" << RESET;
	}
	if (not std::cin.eof())
		std::cout << GREEN << "Contact " << ID << " successfully added !" << RESET << std::endl;
}

void	Contact::showContactAsList(void)
{
	std::cout << MAGENTA << "|" << std::setw(10) << this->_ID;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (this->_items[i].length() > 10)
			std::cout << this->_items[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_items[i];
	}
	std::cout << "|" << RESET << std::endl;
}

void	Contact::displayContact(void)
{
	std::cout << std::endl << BOLDMAGENTA << "CONTACT " << this->_ID;
	std::cout << " DARKEST SECRETS" << std::endl << MAGENTA;
	for (int i = 0; i < 5; i++)
	{
		std::cout << Contact::_fields[i] << " : ";
		std::cout << this->_items[i] << std::endl;
	}
	std::cout << RESET;
}

////////////////////////////////////////////////////////////////////////////////////////////////
typedef	struct	s_contact
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
}				t_contact;


class Phonebook
{
private:
	t_contact repertoir[MAX_CONTACTS];

public:
	int	id;
	int	exit;
	Phonebook(int id):id(id), exit(id){};
	void	add_contact(void);
	void	required_fields(std::string &str1, std::string const &str2);
	void	my_exit(int exit);
	void	search(void);
	void	get_index(int &index);
	void	print_repertoir(void);
	void	print_field(std::string const &str);
	void	print_info_contact(int  &id);

};

#endif


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

