#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

//------ librairies------------
#include "Form.hpp"

class PresidentialPardonForm : public Form {

    public:
        PresidentialPardonForm( void );
        PresidentialPardonForm( std::string target );
        ~PresidentialPardonForm( void );
        PresidentialPardonForm( const PresidentialPardonForm &copy );
        PresidentialPardonForm &operator=( PresidentialPardonForm const &copy );
        
        void    execute( const Bureaucrat &executor ) const;

};  
std::ostream &operator<<( std::ostream &out, Form const &input );
#endif