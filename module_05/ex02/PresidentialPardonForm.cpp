#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) 
: Form(target, "PresidentialPardonForm", PRESIDENTIAL_SIGNED_GRADE, PRESIDENTIAL_EXEC_GRADE)
{
    std::cout << "PresidentialPardonForm constructor called for : " << target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    std::cout << "PresidentialPardonForm destructor called for : " << Form::getTarget() << std::endl;
} 

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ) : Form( copy)
{
    std::cout << "PresidentialPardonForm constructor by copy called for : " << std::endl;
    *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=( PresidentialPardonForm const &copy )
{
	Form::operator=( copy );
	return ( *this );
}

void    PresidentialPardonForm::execute( const Bureaucrat &executor )const
{
    if (this->Form::getFormStatus() == false)
    {
		throw Form::UnsignedForm();
	}
    if (executor.getGrade() > PRESIDENTIAL_EXEC_GRADE)
    {
        throw Form::GradeTooLowException();
    }
    std::cout << "Target : " << Form::getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}