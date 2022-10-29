#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << RED "Error: format must be : ./sed [file] [s1] [s2]" CLEAR << std::endl;
        return(0);
    }
    std::ifstream   inFile (av[1]);
    std::string     str, buff;
    
    std::string newFile(av[3]);
    std::string oldFile(av[2]);
    std::size_t found;

    if (!inFile)
        return(0);
    while (std::getline(inFile, str))
        buff.append(str.append("\n"));
    while ((found = buff.find(oldFile)) >= 0 and found != std::string::npos)
    {
        buff.erase(found, oldFile.length());
		buff.insert(found, newFile);
    }
    inFile.close();
    std::string fileName;
    fileName = av[1]; fileName += ".replace";
    std::ofstream outFile(fileName);
    if (!outFile)
        return(0);
    outFile << buff;
    outFile.close();
    return(0);
}