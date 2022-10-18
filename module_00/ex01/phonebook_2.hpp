#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <string>
#include <iostream>
#include <iomanip>
#define NC "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"
# define FIELD_WIDTH		10
# define MAX_CONTACTS		8
#define NB_INFO				11

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