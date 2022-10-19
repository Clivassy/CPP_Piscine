#include "phonebook.cpp"

int main(void){

    std::string cmd("");

    Phonebook newRepertoire;
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
        if (!cmd.compare("ADD"))
        {
            newRepertoire.addContact();
        }
        if (!cmd.compare("SEARCH"))
        {
            newRepertoire.searchContact();
        }
        if (!cmd.compare("EXIT"))
        {
            newRepertoire.exitPhonebook(1);
        }
    }
    return (0);
}