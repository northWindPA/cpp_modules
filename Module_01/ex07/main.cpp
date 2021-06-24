#include "Replace.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Bad number of args" << std::endl;
		return -1;
	}
	Replace Replace;
	if (Replace.validator(av[1], av[2], av[3]) == -1)
		return -1;
	return 0;
}
