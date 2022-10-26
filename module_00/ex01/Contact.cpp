#include "Contact.hpp"

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

std::string    Contact::getContact(int info)
{
	if (info == 0)
		return (this->_firstName);
	else if (info == 1)
		return (this->_lastName);
	else if (info == 2)
		return (this->_nickname);
	else if (info == 3)
		return (this->_phoneNumber);
	else if (info == 4)
		return (this->_darkestSecret);
	return 0;
}

void    Contact::setContact(std:: string info, int id)
{
	if (id == 0)
    {
        this->_firstName = info;
		return;
    }
	else if (id == 1)
	{
        this->_lastName = info;
		return;
    }
	else if (id == 2)
	{
        this->_nickname = info;
		return;
    }
	else if (id == 3)
	{
        this->_phoneNumber = info;
		return;
    }
	else if (id == 4)
	{
        this->_darkestSecret = info;
		return;
    }
	return;
}