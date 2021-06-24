#include "Array.hpp"

int	main()
{
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "array(5)" << END << std::endl;
	Array<int> array(5);
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "array[1] = 9" << END << std::endl;
	array[1] = 9;
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "get variable by index 9" << END << std::endl;
	try
	{
		std::cout << COL1 << array[9] << END << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << COL1 << e.what() << END << std::endl;
	}
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "ar_cp(array)" << END << std::endl;
	Array<int> ar_cp(array);
	array[4] = 7;
	std::cout << COL3 << "added variable \"7\" in 5 slot of array to see the deference" << END << std::endl;
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL1 << "ar_cp: " << ar_cp << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "ar_cp[3] = 2" << END << std::endl;
	ar_cp[3] = 2;
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL1 << "ar_cp: " << ar_cp << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "ar_cp = array" << END << std::endl;
	ar_cp = array;
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL1 << "ar_cp: " << ar_cp << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "array[4] = 8" << END << std::endl;
	array[4] = 8;
	std::cout << COL1 << "array: " << array << END;
	std::cout << COL1 << "ar_cp: " << ar_cp << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	return (0);
}
