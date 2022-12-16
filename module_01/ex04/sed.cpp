#include "sed.hpp"

Sed:: Sed( void )
{
    // constructor
}

Sed::~Sed( void ) 
{
    // destructor
}

void    Sed:: sedReplace( std::string file, std::string str1, std::string str2 )
{
    std::string     str, buff, fileName;
    std::size_t     found(0);
    
    std::ifstream   inFile (file.c_str());
    if (!inFile)
    {
        std::cout << RED "Error: can't open/read the file" CLEAR << std::endl;
        return;
    }

    fileName = file += ".replace";
    std::ofstream outFile(fileName.c_str());
    if (!outFile)
    {
        std::cout << RED "Error: can't create file" CLEAR << std::endl;
        return;
    }
    while (std::getline(inFile, str))
    {
        buff.append( str.append("\n"));
    } 
    while ((found = buff.find(str1)) >= 0 and found != std::string::npos)
    {
        buff.erase(found, str1.length());
		buff.insert(found, str2);
    }
    inFile.close();
    outFile << buff;
    outFile.close();
}