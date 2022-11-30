#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

//------ librairies------------
# include <iostream>
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

template <typename T, typename Container = std::deque<T> >
// std::stack by default uses std::deque for implementation -> contient des itérators
class MutantStack : public std::stack<T, Container>
{

	public:
		MutantStack(){ }
		MutantStack(const MutantStack &src) : std::stack<T>(src){ }
		~MutantStack(){ }
		
		MutantStack	&operator=(const MutantStack &toCopy){ 
			
			std::stack<T>::operator=(toCopy); 
			return (*this);
		}

	// https://en.cppreference.com/w/cpp/container/deque
	// List of iterator présent dans deque = C++ 98 

		typedef typename Container::iterator	iterator;

		iterator	begin() { return this->c.begin(); }
		iterator	end() { return this->c.end(); }
};
#endif