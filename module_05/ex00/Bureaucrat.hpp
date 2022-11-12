#ifndef BUREAUCRAT_H
#define BUREAUCRAT__H

//------ librairies------------
#include <iostream>
#include <string>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------

class Bureaucrat{

    private:
    std::string _name;
    int _grade;

    public:
    Bureaucrat( void );
    Bureaucrat( std::string name, int grade );
    ~Bureaucrat( void );
    Bureaucrat( const Bureaucrat &copy );
    Bureaucrat &operator=( Bureaucrat const &copy );
    std::string getName( void )const;
    int getGrade( void )const;
};
#endif