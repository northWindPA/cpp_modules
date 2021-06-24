#include <iostream>

#define COL1 "\x1B[35m"
#define COL2 "\x1B[33m"
#define COL3 "\x1B[36m"
#define COL4 "\x1B[34m"
#define COL5 "\x1B[93m"
#define END "\033[0m"

struct Serialize_data
{
	std::string	line_1;
	std::string	line_2;
	int num;
};

void * serialize(void)
{
	char *array = new char[20];
	*reinterpret_cast<int *>(&array[8]) = rand() % 20;
	for (int i = 0; i < 7; ++i)
	{
		array[i] = rand() % 26 + 65;
	}
	array[7] = '\0';
	for (int j = 12; j < 19; ++j)
	{
		array[j] = rand() % 26 + 65;
	}
	array[19] = '\0';
	std::cout << COL5 << "<=====================================================================>" << END << std::endl;
	std::cout << COL2 << "⏩ SERIALIZE 🔁:" << END << std::endl;
	std::cout << COL1 << "🔠 line_1-▶️ " << END << COL4 << reinterpret_cast<char *> (&array[0]) << END << std::endl;
	std::cout << COL1 << "🔠 line_2-▶️ " << END << COL4 << reinterpret_cast<char *> (&array[12]) << END << std::endl;
	std::cout << COL1 << "🔢 number-▶️ " << END << COL4 << *reinterpret_cast<int *> (&array[8]) << END << std::endl;
	return static_cast<void *>(array);
}

Serialize_data * deserialize(void * raw)
{
	std::cout << COL5 << "<=====================================================================>" << END << std::endl;
	std::cout << COL2 << "⏪ DESERIALIZE 🔄:" << END << std::endl;
	Serialize_data *data = new Serialize_data;
	data->line_1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->line_2 = std::string(&reinterpret_cast<char *>(raw)[12], 8);
	data->num = *reinterpret_cast<int *>(static_cast<char *>(raw)+8);
	std::cout << COL3 << "🔠 " << data->line_1 << END << std::endl;
	std::cout << COL3 << "🔠 " << data->line_2 << END << std::endl;
	std::cout << COL3 << "🔢 " << data->num << END << std::endl;
	std::cout << COL5 << "<=====================================================================>" << END << std::endl;
	return data;
}

int main()
{
	srand(time(0));
	void *d = serialize();
	Serialize_data *data = deserialize(d);
	(void)data;
}
