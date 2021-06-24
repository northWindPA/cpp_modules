#include "span.hpp"

void 	subj_test()
{
	span sp = span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void random_test()
{
	span test_span = span(10);
	try
	{
		test_span.addNumber();
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	test_span.addNumber(1);
	test_span.addNumber(7);
	std::cout << std::endl;
	std::cout << COL4;
	for (int i = 0; i < test_span.get_size(); ++i)
	{
		std::cout << "|" << test_span[i] << "| ";
	}
	std::cout << END;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << COL1 << test_span.shortestSpan() << " ◀️- the shortest span" << END << std::endl;
	std::cout << COL5 << test_span.longestSpan() << " ◀️- the largest span" << END << std::endl;
}

int main()
{
	srand(time(NULL));
	// subj_test();
	random_test();
	return (0);
}
