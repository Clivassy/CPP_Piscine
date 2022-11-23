#include "Data.hpp"

int main()
{
    Data *data = new Data;
    uintptr_t ptr;
    void *newPtr;

    initializeData(data);
  //  printDataContent(data);

    std::cout << "Data before cast : " << data << std::endl;

    ptr = serialize(data);

    std::cout << "Ptr after cast de Data en unsigned : " << ptr << std::endl;

    newPtr = deserialize(ptr);
    std::cout << "Ptr after recast to Data* : " << newPtr << std::endl;

 //   printDataContent(deserialize(newPtr));
    delete data;
}