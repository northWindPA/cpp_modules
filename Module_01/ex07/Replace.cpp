#include "Replace.hpp"

Replace::Replace()
{
	std::cout << "Constructor is ready" << std::endl;
}

Replace::~Replace()
{
	std::cout << "Destruction" << std::endl;
}

int Replace::validator(const std::string &file_name, const std::string &s1, const std::string &s2)
{
	size_t find_index = 0;
	std::string big_line;
	std::ostringstream stream;

	if (s1.length() == 0)
	{
		std::cout << "No string for searching" << std::endl;
		return -1;
	}
	_old_file.open(file_name);
	if (_old_file.is_open() == 0)
	{
		std::cout << "First file doestn't open" << std::endl;
		return -1;
	}
	_changed_file.open(file_name + ".replace", std::ios::trunc);
	if (_changed_file.is_open() == 0)
	{
		std::cout << "Second file doestn't open or file can't be created" << std::endl;
		return -1;
	}
	stream << _old_file.rdbuf();
	big_line = stream.str();
	if ((find_index = big_line.find(s1)) == big_line.npos)
	{
		std::cout << "No such line in the file" << std::endl;
		return -1;
	}
	while(1)
	{
		if (find_index != big_line.npos)
		{
			big_line.replace(find_index, s1.length(), s2);
			find_index = big_line.find(s1, find_index + s2.length()); 
		}
		else
			break;
	}
	_changed_file << big_line;
	_old_file.close();
	_changed_file.close();
	return 0;
}