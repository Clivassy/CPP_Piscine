#include "Array.hpp"

int main( void){

    Array<int> emptyArray;
    std::cout << YELLOW "------------------------------------" CLEAR << std::endl;
    std::cout << " TEST WITH EMPTY ARRAY" << std::endl;
    std::cout << YELLOW "------------------------------------" CLEAR<< std::endl;
    try
    {
        emptyArray[0] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Array<int> array(MAX_VAL);
    int* mirror = new int[MAX_VAL]; // tableau test
 
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 100;
        array[i] = value;
        mirror[i] = value;
    }


    Array<int> Operator = array; // assignation avec operateur de surcharge
    Array<int> Copy(Operator); // construction par copie


    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != array[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    std::cout << YELLOW "------------------------------------" CLEAR << std::endl;
    std::cout << " PRINT OF ARRAY CONTENT - TEST WITH VALID INDEX " << std::endl;
    std::cout << YELLOW  "------------------------------------" CLEAR << std::endl;
    try
    {   
        printArray(array, array.size(), "Array : construction classique");
        printArray(Operator, Operator.size(), "Array : construit par operateur d'assignation");
        printArray(array, array.size(), "Array : construit par copy");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << YELLOW "------------------------------------" CLEAR << std::endl;
    std::cout << " TEST WITH NEGATIVE INDEX " << std::endl;
    std::cout << YELLOW "------------------------------------" CLEAR<< std::endl;
    try
    {   
        array[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << YELLOW "------------------------------------" CLEAR << std::endl;
    std::cout << " TEST WITH INDEX > TAB SIZE" << std::endl;
    std::cout << YELLOW "------------------------------------" CLEAR<< std::endl;
    try
    {   
        array[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
}