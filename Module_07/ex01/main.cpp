#include "iter.hpp"

class staff
{
	private:
		int _var;
	public:
		staff(): _var(rand() % 9)
		{}
		int get_var() const
		{
			return _var;
		}
};

template <typename T>
void arg_out(T const &arg)
{
	std::cout << " " << arg << " ";
}

std::ostream &operator << (std::ostream &out_stream, staff const &var)
{
	out_stream << var.get_var();
	return out_stream;
}

void test_func_1(int func_arg)
{
	std::cout << "test funtion №1 has got -▶️ " << func_arg << std::endl;
}

void test_func_2(int &func_arg)
{
	int tmp;
	tmp = func_arg;
	func_arg += func_arg;
	std::cout << "test funtion №2 has got -▶️ " << tmp << " and shows sum: arg + arg -▶️ " << func_arg << std::endl;
}

void test_func_3(std::string const &str)
{
	std::cout << "test funtion №3 has got string -▶️ " << "\"" << str << "\"" << std::endl;
}

int	main()
{
	srand(time(0));
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	int test_1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << COL1;
	::iter(test_1, 10, test_func_1);
	std::cout << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	int test_2[] = {1, 2, 3, 4};
	std::cout << COL2;
	::iter(test_2, 4, test_func_2);
	std::cout << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL3;
	::iter(test_2, 4, test_func_2);
	std::cout << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::string test_3[] = {"ecole", "42", "sber", "21"};
	std::cout << COL4;
	::iter(test_3, 4, test_func_3);
	std::cout << END;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << std::endl;
	std::cout << COL5 << "<=================================|→ staff test ←|=================================>" << END << std::endl;
	int test_4[] = {21, 42, 84, 168};
	staff test_5[5];
	std::cout << "🔢 ";
	std::cout << COL1;
	::iter(test_4, 4, arg_out);
	std::cout << END;
	std::cout << " 🔢";
	std::cout << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << "🎲 ";
	std::cout << COL2;
	::iter(test_5, 5, arg_out);
	std::cout << END;
	std::cout << " 🎲";
	std::cout << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	return (0);
}
