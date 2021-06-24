#include "Convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << COL5 << "Error:\n" << "Wrong number of arguments." << END << std::endl;
		return (-1);
	}
	Convert Convert(av[1]);
	Convert.convert_to_char();
	Convert.convert_to_int();
	Convert.convert_to_float();
	Convert.convert_to_double();
	return (0);
}