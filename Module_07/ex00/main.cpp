#include "whatever.hpp"

class staff_assign
{
	private:
		int _var;
	public:
		staff_assign(int var)
		: _var(var)
		{}

		int get_var() const
		{
			return (_var);
		}

		bool operator == (staff_assign const &right_var) const
		{
			return (_var == right_var._var);
		}

		bool operator != (staff_assign const &right_var) const
		{
			return (_var != right_var._var);
		}

		bool operator > (staff_assign const &right_var) const
		{
			return (_var > right_var._var);
		}

		bool operator < (staff_assign const &right_var) const
		{
			return (_var < right_var._var);
		}

		bool operator >= (staff_assign const &right_var) const
		{
			return (_var >= right_var._var);
		}

		bool operator <= (staff_assign const &right_var) const
		{
			return (_var <= right_var._var);
		}
};

template <typename T>
static void show_probe(T var_1, T var_2)
{
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL1 << "var_1 = " << var_1 << ", var_2 = " << var_2 << END << std::endl;
	::swap(var_1, var_2);
	std::cout << COL1 << "var_1 = " << var_1 << ", var_2 = " << var_2 << END << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL3 << "min(" << var_1 << ", " << var_2 << ") = " << ::min(var_1, var_2) << END << std::endl;
	::swap(var_1, var_2);
	std::cout << COL3 << "min(" << var_1 << ", " << var_2 << ") = " << ::min(var_1, var_2) << END << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL2 << "max(" << var_1 << ", " << var_2 << ") = " << ::max(var_1, var_2) << END << std::endl;
	::swap(var_1, var_2);
	std::cout << COL2 << "max(" << var_1 << ", " << var_2 << ") = " << ::max(var_1, var_2) << END << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
}

int	main()
{
	show_probe(1, 2);
	std::cout << std::endl;
	show_probe("abc", "zxw");
	std::cout << std::endl;
	show_probe(2.1, 4.2);
	staff_assign var_1(21);
	staff_assign var_2(42);
	std::cout << std::endl << COL5 << "<=================================|→ staff test ←|=================================>" << END << std::endl;
	std::cout << COL4 << "var_1: " << var_1.get_var() << ", var_2: " << var_2.get_var() << END << std::endl;
	::swap(var_1, var_2);
	std::cout << COL4 << "var_1: " << var_1.get_var() << ", var_2: " << var_2.get_var() << END << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	std::cout << COL4 << "min(var_1, var_2) = " << ::min(var_1, var_2).get_var() << END << std::endl;
	std::cout << COL4 << "max(var_1, var_2) = " << ::max(var_1, var_2).get_var() << END << std::endl;
	std::cout << COL5 << "<==================================================================================>" << END << std::endl;
	return (0);
}
