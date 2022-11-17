#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) 
: Form(target, "PresidentialPardonForm", PRESIDENTIAL_SIGNED_GRADE, PRESIDENTIAL_EXEC_GRADE)
{
    //
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
  //  
} 

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy )
{
    *this = copy;
}

PresidentialPardonForm  &PresidentialPardonForm::operator=( PresidentialPardonForm const &copy )
{
	Form::operator=( copy );
	return ( *this );
}

void    PresidentialPardonForm::execute( const Bureaucrat &executor )const
{
    (void)executor;
    // informe que la target a été pardonnée par Zaphod Beeblebrox.
}

