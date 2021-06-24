#include "Contact.hpp"

Contact::Contact()
{
	iterator = 0;
	fill_name[0] = "\x1B[33mFirst name---------> \x1B[0m ";
	fill_name[1] = "\x1B[33mLast name----------> \x1B[0m ";
	fill_name[2] = "\x1B[33mNickname-----------> \x1B[0m ";
	fill_name[3] = "\x1B[33mLogin--------------> \x1B[0m ";
	fill_name[4] = "\x1B[33mPostal address:----> \x1B[0m ";
	fill_name[5] = "\x1B[33mEmail address:-----> \x1B[0m ";
	fill_name[6] = "\x1B[33mPhone number:------> \x1B[0m ";
	fill_name[7] = "\x1B[33mBirthday date:-----> \x1B[0m ";
	fill_name[8] = "\x1B[33mFavorite meal:-----> \x1B[0m ";
	fill_name[9] = "\x1B[33mUnderwear color:---> \x1B[0m ";
	fill_name[10] = "\x1B[33mDarkest secret:----> \x1B[0m ";
}

Contact::~Contact()
{}

int	Contact::show_data()
{
	int flag;
	std::string input;

	flag = 0;
	if (iterator == 0)
	{
		std::cout << "\x1B[33mಥ_ಥ\x1B[0m \x1B[35mThere are no contacts in the phonebook!\x1B[0m \x1B[33mಥ-ಥ\x1B[0m\n";
		return 0;
	}
	std::cout << "\x1B[33m|===========================================|\x1B[0m" <<std::endl;
	std::cout << "\x1B[33m|\x1B[0m" << std::setw(29) << "\x1B[35mID\x1B[0m\x1B[33m|\x1B[0m";
	std::cout << "\x1B[35mFirst name\x1B[0m\x1B[33m|\x1B[0m";
	std::cout << "\x1B[35m Last name\x1B[0m\x1B[33m|\x1B[0m";
	std::cout << "\x1B[35m  Nickname\x1B[0m\x1B[33m|\x1B[0m" << std::endl;
	for (int i = 1; i < iterator; i++)
	{
		std::cout << "\x1B[33m|-------------------------------------------|\x1B[0m" << std::endl;
		std::cout << "\x1B[33m|\x1B[0m" << std::setw(14) << "\x1B[36m" << i << "\x1B[0m" << "\x1B[33m|\x1B[0m";
		for (int j = 0; j < 3; j++)
		{
			if (contacts[i][j].length() > 10)
				std::cout << "\x1B[35m" << contacts[i][j].substr(0, 9) << "." << "\x1B[0m";
			else
				std::cout << "\x1B[35m" << std::setw(10) << contacts[i][j] << "\x1B[0m";
			std::cout << "\x1B[33m|\x1B[0m";
		}
		std::cout << std::endl;
	}
	std::cout << "\x1B[33m|===========================================|\x1B[0m" << std::endl;
	std::cout << "\x1B[33m(☞ﾟヮﾟ)☞\x1B[0m \x1B[31mChoose contact from " << 1 << " to " << iterator - 1 << "\x1B[0m \x1B[33mヽ(´^｀)ノ\x1B[0m\n";
	std::getline(std::cin, input);
	if (std::cin.eof())
		flag = 1;
	if (flag == 1)
	{
		std::cout << "\x1B[33m¯\\_(⊙_⊙)_/¯\x1B[0m \x1B[35mSearching of a contact has been stopped!\x1B[0m \x1B[33m¯\\_(*_*)_/¯\x1B[0m\n";
		return -1;
	}
	if (input == "")
	{
		std::cout << "\x1B[33mʕ •`ᴥ•´ʔ\x1B[0m Empty input! \x1B[33mლ(｀ー´ლ)\x1B[0m\n";
		return 0;
	}
	for (unsigned long x = 0; x < input.length(); x++)
	{
		if (!std::isdigit(input[x]))
		{
			std::cout << "\x1B[33mʕ •`ᴥ•´ʔ\x1B[0m \x1B[35mNon-digital input!\x1B[0m \x1B[33mლ(｀ー´ლ)\x1B[0m\n";
			return 0;
		}
	}
	int index = std::stoi(input);
	if (index > iterator - 1 || index < 1)
	{
		std::cout << "\x1B[33mʕ •`ᴥ•´ʔ\x1B[0m \x1B[35mWrong input!\x1B[0m \x1B[33mლ(｀ー´ლ)\x1B[0m\n";
		return 0;
	}
	show_all(index);
	return 0;
}

void	Contact::show_all(int n)
{
	for (int j = 0; j < 11; j++)
	{
		std::cout << fill_name[j];
		std::cout << contacts[n][j] << std::endl;
	}
}

int		Contact::fill_contact()
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	if (iterator == 0)
		iterator = 1;
	if (iterator == 9)
	{
		std::cout << "\x1B[33m(^_^)\x1B[0m \x1B[35mPhonebook is full already!\x1B[0m \x1B[33m(^-^)\x1B[0m\n";
		return 0;
	}
	while (i < 11)
	{
		std::cout << fill_name[i];
		std::getline(std::cin, contacts[iterator][i]);
		if (std::cin.eof())
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
	{
		std::cout << "\x1B[33m(｡◕‿◕｡)\x1B[0m \x1B[35mContact has been added to the phonebook!\x1B[0m \x1B[33mヽ(´▽`)/\x1B[0m\n";
		iterator++;
	}
	else
	{
		std::cout << "\x1B[33m¯\\_(⊙︿⊙)_/¯\x1B[0m \x1B[35mCreation of a contact has been stopped!\x1B[0m \x1B[33m¯\\_(ツ)_/¯\x1B[0m\n";
		return -1;
	}
	return (0);
}
