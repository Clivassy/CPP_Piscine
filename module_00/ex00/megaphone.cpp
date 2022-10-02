#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

/*-----------------------------------------------------
Good To Know

cout is pronounced "see-out". 
-> Used for output, and uses the insertion operator (<<)
cin is pronounced "see-in". 
->Used for input, and uses the extraction operator (>>)
--------------------------------------------------------*/

int main(int argc, char** argv)
{
    char letter;
    string silence("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

    if (argc == 1)
    {
        cout << silence << endl;
        return (0);
    }
    for(int i(1); i < argc ; i++)
    {   
        if (i < argc)
            cout << " ";
        for (size_t j(0); j < strlen(argv[i]); j++)
        {
            letter = toupper(argv[i][j]);
            cout << letter;
        }
    }
    return (0);
  }

