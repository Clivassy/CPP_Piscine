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

#ifndef MAIN_H
# define MAIN_H

# include <iostream>
# include <fstream>

#endif

# include "main.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR: Invalid number of arguments" << std::endl;
		return -1;
	}
	std::ifstream in(argv[1]);
	if (!in.is_open())
	{
		std::cout << "ERROR: File is not exist/open\n" << std::endl;
		return -1;
	}
	std::string file_out = argv[1];
	file_out += ".replace";

	std::ofstream out(file_out, std::ios_base::out | std::ios_base::trunc);

	std::string	buf;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	for (getline(in, buf); !in.eof(); getline(in, buf))
	{
		int tmp = 0;
		for(int i = tmp; i >= 0;)
		{
			i = buf.find(s1, tmp);
			if (i == -1)
				continue ;
			buf.erase(i, s1.length());
			buf.insert(i, s2);
			tmp = i + s2.length();
		}
		out << buf << std::endl;
	}
	in.close();
	out.close();

	return 0;
} 

