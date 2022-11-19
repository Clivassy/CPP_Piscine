#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

//------ librairies------------
#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
#define MAGENTA  "\x1B[35m"
//----------------------------
class Form;
 
class Bureaucrat{

    private:
        Bureaucrat( void );
        const std::string _name;
        int _grade;

    public:
        Bureaucrat( std::string name, int grade );
        ~Bureaucrat( void );
        Bureaucrat( const Bureaucrat &copy );
        Bureaucrat &operator=( Bureaucrat const &copy );

        std::string getName( void )const;
        int         getGrade( void )const;
        void        signForm( Form &formulaire );
        
        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw() // return a null terminated character sequence that is used to identify the exception.
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
        void    increment( void );
        void    decrement( void );
};

std::ostream &operator<<( std::ostream &out, Bureaucrat const &input );
#endif