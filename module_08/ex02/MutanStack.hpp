#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

//------ librairies------------
# include <iostream>
#include <deque>
# include <cstdlib>
# include <algorithm>
# include <map>
# include <list>
# include <stack>
# include <vector>
# include <numeric>

//-------- Colors ------------
#define CLEAR "\e[0m"
#define YELLOW "\e[33m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define CYAN "\e[0;36m"
//----------------------------
template<typename T>
class MutantStack : public std::stack<T> 
{

	public:
		MutantStack(){ }
		MutantStack(const MutantStack &src) : std::stack<T>(src){ }
		~MutantStack(){ }
		
		MutantStack	&operator=(const MutantStack &toCopy){ 
			
			this->c = toCopy.c; 
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator	iterator; 
		// container_type == membre de std::stack == container generique 
		// standard container has : begin  + end iterators 

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};
#endif