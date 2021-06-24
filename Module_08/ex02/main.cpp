#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	mstack.push(5);
	std::cout << COL5 << "\"5\" ⬅️ has been pushed to the stack" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	mstack.push(17);
	std::cout << COL5 << "\"17\" ⬅️ has been pushed to the stack" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	std::cout << COL2 << "\"" << mstack.top() << "\"" << " ⬅️ top value of the stack" << END << std::endl;
	mstack.pop();
	std::cout << COL1 << "one element of the stack has been poped" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	mstack.push(3);
	std::cout << COL5 << "\"3\" ⬅️ has been pushed to the stack" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	mstack.push(5);
	std::cout << COL5 << "\"5\" ⬅️ has been pushed to the stack" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	mstack.push(737);
	std::cout << COL5 << "\"737\" ⬅️ has been pushed to the stack" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	//[...]
	mstack.push(0);
	std::cout << COL5 << "\"0\" ⬅️ has been pushed to the stack" << END << std::endl;
	std::cout << COL3 << "\"" << mstack.size() << "\"" << " ⬅️ current size of the stack" << END << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	std::cout << COL2 << "\"" << *it << "\"" << " ⬅️ iterator points to the beginning of the stack" << END << std::endl;
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << COL2 << "\"" << *ite << "\"" << " ⬅️ iterator points to the end of the stack" << END << std::endl;
	++it;
	std::cout << COL1 << "incremented begin-iterator" << END << std::endl;
	--it;
	std::cout << COL1 << "decremented begin-iterator" << END << std::endl;
	std::cout << COL1 << "showing all elements of the stack" << END << std::endl;
	int i = 0;
	while (it != ite)
	{
		std::cout << COL4 << "\"" << *it << "\"" << " ⬅️ value of the element in the stack " << i << " ⬅️ position of the element in the stack" << END << std::endl;
		++it;
		++i;
	}
	std::stack<int> s(mstack);
	return 0;
}