#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

//------ librairies------------
#include <iostream>
#include <string>
#include "Form.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Form;
 
class Bureaucrat{

    private:
        const std::string _name;
        Bureaucrat( void );
        int _grade;

    public:
        Bureaucrat( std::string name, int grade );
        ~Bureaucrat( void );
        Bureaucrat( const Bureaucrat &copy );
        Bureaucrat &operator=( Bureaucrat const &copy );

        std::string     getName( void )const;
        int             getGrade( void )const;
        void            signForm( Form &formulaire );
        void            executeForm(Form const &Form);
        void            increment( void );
        void            decrement( void );

        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return("Error: grade is too high.");
            }
        };
        class GradeTooLowException: public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return("Error: grade is too low.");
            }
        };
};
std::ostream &operator<<( std::ostream &out, Bureaucrat const &input );

#endif