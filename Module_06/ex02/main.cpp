#include <iostream>

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

class Base
{
	public:
		virtual ~Base()
		{};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

void identify_from_reference( Base & p)
{

	if (dynamic_cast<A *>(dynamic_cast<Base *>(&p)))
	{
		std::cout << COL2 << "-▶️ It's the class \"A\" (reference) ◀️-" << END << std::endl;
	}
	if (dynamic_cast<B *>(&p))
	{
		std::cout << COL2 << "-▶️ It's the class \"B\" (reference) ◀️-" << END << std::endl;
	}
	if (dynamic_cast<C *>(&p))
	{
		std::cout << COL2 << "-▶️ It's the class \"C\" (reference) ◀️-" << END << std::endl;
	}
}

void identify_from_pointer (Base * p)
{
	if (dynamic_cast<A *>(p))
	{
		std::cout << COL4 << "✳️ It's the class \"A\" (pointer) ✳️" << END << std::endl;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << COL4 << "✳️ It's the class \"B\" (pointer) ✳️" << END << std::endl;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << COL4 << "✳️ It's the class \"C\" (pointer) ✳️" << END << std::endl;
	}
}

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			std::cout << COL1 << "🎲 Class \"A\" generate 🎲" << END << std::endl;
			return new A;
		case 1:
			std::cout << COL1 << "🎲 Class \"B\" generate 🎲" << END << std::endl;
			return new B;
		case 2:
			std::cout << COL1 << "🎲 Class \"C\" generate 🎲" << END << std::endl;
			return new C;
	}
	return nullptr;
}

int main()
{
	srand(time(NULL));
	int i = 0;
	while (i < 7)
	{
		std::cout << COL5 << "<=====================================================================>" << END << std::endl;
		Base *base = generate();
		identify_from_pointer(base);
		identify_from_reference(*base);
		i++;
	}
	std::cout << COL5 << "<=====================================================================>" << END << std::endl;
	return (0);
}