#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: format must be : ./sed [file] [s1] [s2]" << std::endl;
        return(0);
    }
    std::ofstream outFile("file.replace");
    std::istream readFile("file");
    std::string readLine
    std::string search;
    std::string firstName;
    std::string lastName;

    std::cout << "Enter The Id :: ";
    std::cin >> search;

    while(getline(readFile,readLine))
{
    if(readLine == search)
    {
        outFile << std::readLine;
        outFile << std::endl;

        std::cout<<"Enter New First Name :: ";
        std::cin>>firstName;
        std::cout<<"Enter New Last Name :: ";
        std:: cin>>lastName;

        outFile<<firstName<<std::endl;
        outFile<<lastName<<std::endl;
    }
    else{
        outFile<<readLine<<std::endl;
    }
}

    return(0);
}


/*std::string::size_type	pos;
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

	return (true);
*/