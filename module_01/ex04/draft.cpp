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