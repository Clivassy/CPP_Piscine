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
    std::size_t found;
    
    std::ifstream   inFile (file);
    if (!inFile)
        return;
   
    fileName = file += ".replace";
    std::ofstream outFile(fileName);
    if (!outFile)
        return;
   
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