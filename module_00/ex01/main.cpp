#include "phonebook.cpp"

int main(int ac, char *av[]){

    (void)ac;
    (void)av;
    int ret(-1);
    string cmd("");

    Phonebook new_repertoire;
   
  //  for(int i = 0; i < 8; i++) 
    //  repertoire.new_repertoire[i].setX(i); // initialization du tableau de contacts
    
    cin >> cmd;
    while ((ret = cmd.compare("EXIT")) != 0)
    {
        if ((ret = cmd.compare("ADD")) == 0)
        {
            new_repertoire.addContact();
           /* cout << "First Name : " << endl; cin >> repertoire.new_repertoire[it].firstName;
            cout << "Last Name : " << endl; cin >> repertoire.new_repertoire[it].lastName;
            cout << "Nickname : " << endl; cin >> repertoire.new_repertoire[it].nickname;
            cout << "Phone number : " << endl; cin >> repertoire.new_repertoire[it].phoneNumber;
            cout << "Darkest secret : " << endl; 
            cin.ignore(); getline(cin, repertoire.new_repertoire[it].darkestSecret);
            it++; */
        }
        if ((ret = cmd.compare("SEARCH")) == 0)
        {
           // phonebook.searchContact(); // appel de la fonction qui search un contact
            cin >> cmd;
        }
        else
        {
            cin >> cmd;
        }
    }
    return (0);
}