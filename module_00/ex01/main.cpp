#include "Phonebook.hpp"

int main(int ac, char **av){

    std::string cmd("");
    Phonebook newRepertoire;

    (void)av;
    if (ac == 1)
    {
        std::cout << YELLOW "|-------------------------------|" << std::endl;
        std::cout << "|     WELCOME ON PHONEBOOK      |" << std::endl;
        std::cout << "|-------------------------------|" << std::endl;
        std::cout << "|ADD    ➜       Adding Contacts |" << std::endl;
        std::cout << "|SEARCH ➜       Search Contact  |" << std::endl;
        std::cout << "|EXIT   ➜       Quit program    |" << std::endl;
        std::cout << "|-------------------------------|" CLEAR << std::endl;
        while (!newRepertoire.exit)
        {
            getline(std::cin, cmd);
            if (std::cin.eof())
            {
                exit(EXIT_FAILURE);
            }
            else if (!cmd.compare("ADD"))
            {
                newRepertoire.addContact();
            }
            else if (!cmd.compare("SEARCH"))
            {
                newRepertoire.searchContact();
            }
            else if (!cmd.compare("EXIT"))
            {
                newRepertoire.exitPhonebook(1);
            }
        }
    }
    else
        std::cout << RED "Usage: ./phonebook" CLEAR << std::endl; 
    return (0);
}