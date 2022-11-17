#ifndef SHRUBBERY_CREATION_FORM_H
#define SHRUBBERY_CREATION_FORM_H

#define SHRUBBERY_SIGNED_GRADE 145
#define SHRUBBERY_EXEC_GRADE 137
//------ librairies------------
#include "Form.hpp"
#include <iostream>
#include <fstream> 

class ShrubberyCreationForm : public Form {

    public:
        ShrubberyCreationForm( std::string target );
        ~ShrubberyCreationForm( void );
        ShrubberyCreationForm( const ShrubberyCreationForm &copy );
        ShrubberyCreationForm &operator=( ShrubberyCreationForm const &copy );
        
        void        execute( const Bureaucrat &executor ) const;

};  
std::ostream &operator<<( std::ostream &out, Form const &input );
#endif