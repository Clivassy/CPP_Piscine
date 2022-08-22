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
    size_t i;
    size_t j = 0;
    string silence = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    if (argc == 1)
    {
        cout << silence << "\n";
        return (0);
    }
    i = 1;
    while ((int)i < argc)
    {
        j = 0;
        while (j < strlen(argv[i]))
        {
            letter = toupper(argv[i][j]);
            cout << letter;
            j++;
        }
        i++;
        if ((int)i < argc)
            cout << " ";
    }
    return (0);
  }
