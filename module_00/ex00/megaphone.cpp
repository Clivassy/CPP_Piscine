#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{
    char letter;

    if (argc >= 2)
    {
        for(int i(1); i < argc ; i++)
        {
            if (i < argc)
                std::cout << " ";
            for (size_t j(0); j < strlen(argv[i]); j++)
            {
                letter = toupper(argv[i][j]);
                std::cout << letter;
            }
        }  
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
    return (0);
  }

