#ifndef FORM_H
#define FORM_H

//------ librairies------------
#include <iostream>
#include <string>
#include "Bureaucrat.hpp" 

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Bureaucrat; 

class Form{

    private:
        const std::string _target;
        const std::string _name;
        int _signedGrade;
        int _execGrade;
        bool _signed;

    public:
        Form( void );
        Form( std::string target, std::string name,  int signedGrade, int execGrade );
        Form( std::string name, int signedGrade, int execGrade );
        virtual ~Form( void );
        Form( const Form &copy );
        Form &operator=( Form const &copy );

        std::string     getName( void )const;
        std::string     getTarget( void )const;
        int             getSignedGrade( void )const;
        int             getExecGrade( void )const;
        bool            getFormStatus( void ) const ;
        void            beSigned( Bureaucrat &bureaucrat );
        void virtual    execute( const Bureaucrat &executor ) const = 0; // classe abstraire car fonction vituelle pure

        class GradeTooHighException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return("Grade is too high.");
            }
        };

        class GradeTooLowException: public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return("Grade is too low.");
            }
        };
        class UnsignedForm: public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return("Form must be signed to be executed.");
            }
        };
};  

std::ostream &operator<<( std::ostream &out, Form const &input );
#endif