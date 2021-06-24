#include <iostream>

void megaphone(int num_lines, char **lines)
{
	int i;
	int j;
	char upper_case_ch;

	i = 1;
	while (i < num_lines)
	{
		j = 0;
		while (lines[i][j])
		{
			upper_case_ch = std::toupper(lines[i][j]);
			std::cout << upper_case_ch;
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << "" << std::endl;
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
		megaphone(ac, av);
	return (0);
}
