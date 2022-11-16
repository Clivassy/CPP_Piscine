#ifndef PRESIDENTIAL_PARDON_FORM_H
#define PRESIDENTIAL_PARDON_FORM_H

#define SIGNED_GRADE 25
#define EXEC_GRADE 5
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