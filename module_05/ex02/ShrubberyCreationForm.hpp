#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

//------ librairies------------
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

    public:
        ShrubberyCreationForm( void );
        ShrubberyCreationForm( std::string target );
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm( const ShrubberyCreationForm &copy );
        ShrubberyCreationForm &operator=( ShrubberyCreationForm const &copy );
        
        void    execute( const Bureaucrat &executor ) const;

};  
std::ostream &operator<<( std::ostream &out, Form const &input );
#endif