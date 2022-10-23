#include "sed.hpp"

Sed:: Sed(std::string file, std::string str1, std::string str2) 
:_fileName(file), _s1(str1), _s2(str2)
{

}

Sed::~Sed( void ) 
{

}

void    Sed:: sedReplace( void )
{
    std::string	fileReplace;

    std::ofstream file.replace;
    file.replace.open(file.c_str());
    // protection ? ;

    _file = av[1];
		fileReplace = _file + ".replace";

    file.replace.close();
}

/*void	replaceString(std::ofstream &fileout, std::string s1, std::string s2, std::string buff){

	size_t pos;
	size_t toSkip;

	pos = buff.find(s1);
	if (pos == std::string::npos){
		
		fileout << buff;
		return;
	}
	else {

		fileout << buff.substr(0, pos);
		fileout << s2;
		toSkip = pos + s1.length();
		replaceString(fileout, s1, s2, buff.substr(toSkip));
	}
	return;
}*/