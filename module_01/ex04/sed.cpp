#include "sed.hpp"
#include <fstream>
Sed:: Sed(std::string file, std::string str1, std::string str2) 
:_fileName(file), _s1(str1), _s2(str2)
{

}

Sed::~Sed( void ) 
{

}

void    Sed:: sedReplace( std::string file, std::string str1, std::string str2 )
{
	(void)str2;
	(void)str1;

    std::ofstream fileReplace;
	std::string fileReplaceName, line, bufferTemp;

	std:: ifstream bufferIn(this->fileReplace.c_str())
	if (!fileReplace)
	{
 		std::cerr << RED "Error: file could not be opened" CLEAR << std::endl;
     	return;
	}
	while (std::getline(fileReplace, line))
		bufferTemp.append(line.append("\n"));
	// remplacer dans le ficher les occurrences de s1 par s2
	
    fileReplace.close();

	// fileReplaceName = file + ".replace";
	// file = fileReplaceName;
}

/*	std::string::size_type	pos;
	std::string				line, save;

	std::ifstream fileIn(this->_fileName.c_str());
	if (!fileIn)
		return (false);
	while (std::getline(fileIn, line))
		save.append(line.append("\n"));
	while ((pos = save.find(this->_toReplace)) >= 0 and pos != std::string::npos)
	{
		save.erase(pos, this->_toReplace.length());
		save.insert(pos, this->_toInsert);
	}
	fileIn.close();

	std::ofstream fileOut(this->_fileName.append(".replace").c_str());
	if (!fileOut)
		return (false);
	fileOut << save;
	fileOut.close();

	return (true);*/