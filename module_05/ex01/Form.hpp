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
    const std::string _name;
    int _signedGrade;
    int _execGrade;
    bool _signed;

    public:
    Form( void );
    Form( std::string name, int signedGrade, int execGrade );
    ~Form( void );
    Form( const Form &copy );
    Form &operator=( Form const &copy );
    std::string getName( void )const;
    int getSignedGrade( void )const;
    int getExecGrade( void )const;
    bool getFormStatus( void ) const ;
    void beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return("grade is too high.");
        }
    };
    class GradeTooLowException: public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return("grade is too low.");
        }
    };
    void    increment( void );
    void    decrement( void );
};

std::ostream &operator<<( std::ostream &out, Form const &input );
#endif