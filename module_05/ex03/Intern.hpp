#ifndef INTERN_H
#define INTERN_H

//------ librairies------------
#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------
class Form;

class Intern{

    public:
        Intern( void );
        ~Intern( void );
        Intern( const Intern &copy );
        Intern &operator=( Intern const &copy );

        Form*	shrubbery(std::string target);
        Form*	presidential(std::string target);
        Form*	robotomy(std::string target);
        Form*   makeForm(std::string FormName, std::string FormTarget);

        class InexistingFormException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return("form does not exist.");
            }
        };
};

#endif