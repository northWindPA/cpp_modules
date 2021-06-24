#include <stack>
#include <iostream>

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

#ifndef CPP_MUTANTSTACK_H
#define CPP_MUTANTSTACK_H

template<class T>
class MutantStack: public std::stack<T>
{
	public:

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack()
		: std::stack<T>()
		{};

		virtual ~ MutantStack()
		{};

		MutantStack(MutantStack const &copy)
		: std::stack<T>(copy)
		{};

		MutantStack &operator = (MutantStack const &copy)
		{
			*this = copy;
		}

		iterator begin()
		{
			return this->c.begin();
		};

		reverse_iterator rbegin()
		{
			return this->c.rbegin();
		};

		const_iterator begin() const
		{
			return this->c.begin();
		};

		const_reverse_iterator rbegin() const
		{
			return this->c.rbegin();
		};

		iterator end()
		{
			return this->c.end();
		};

		reverse_iterator rend()
		{
			return this->c.rend();
		};

		const_iterator end() const
		{
			return this->c.end();
		};

		const_reverse_iterator rend() const
		{
			return this->c.rend();
		};
};

#endif
