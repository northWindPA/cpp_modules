#include "Contact.hpp"

int			main()
{
	int	i;
	int flag;
	Contact contact;
	std::string input_line;

	i = 0;
	flag = 0;
	std::cout << "\x1B[33m(づ｡◕‿‿◕｡)づ\x1B[0m \x1B[31mWelcome to the phonebook!\x1B[0m \x1B[33m\(ᵔᵕᵔ)/\x1B[0m\n\x1B[33m~(^-^)~\x1B[0m \x1B[31mPlease, input one of the following commands:\x1B[0m \x1B[33m(ʘ‿ʘ)\x1B[0m\n\x1B[34m|ADD|\x1B[0m \x1B[33mʕᵔᴥᵔʔ\x1B[0m \x1B[34m|SEARCH|\x1B[0m \x1B[33m☜(⌒▽⌒)☞\x1B[0m \x1B[34m|EXIT|\x1B[0m \x1B[33mლ(ಠ益ಠლ)\x1B[0m\n";
	while (std::getline(std::cin, input_line) != 0)
	{
		if (input_line == "ADD")
		{
			if (contact.fill_contact() == -1)
				return (-1);
		}
		else if (input_line == "SEARCH")
		{
			if (contact.show_data() == -1)
				return (-1);
		}
		else if (input_line == "EXIT")
		{
			std::cout << "\x1B[33m（ ^_^）o自 \x1B[0m\x1B[31mGoodbye, have a nice day!\x1B[0m\x1B[33m 自o（^_^ ）\x1B[0m\n";
			flag = 1;
			break ;
		}
		else
			std::cout << "\x1B[33mʕ •`ᴥ•´ʔ\x1B[0m \x1B[35mWrong command! Choose one of the showed commands!\x1B[0m \x1B[33mლ(｀ー´ლ)\x1B[0m\n";
		std::cout << "\x1B[33m~(^-^)~\x1B[0m \x1B[31mPlease, input one of the following commands:\x1B[0m \x1B[33m(ʘ‿ʘ)\x1B[0m\n\x1B[34m|ADD|\x1B[0m \x1B[33mʕᵔᴥᵔʔ\x1B[0m \x1B[34m|SEARCH|\x1B[0m \x1B[33m☜(⌒▽⌒)☞\x1B[0m \x1B[34m|EXIT|\x1B[0m \x1B[33mლ(ಠ益ಠლ)\x1B[0m\n";
	}
	if (flag == 0)
		std::cout << "\x1B[33m（ ^_^）o自 \x1B[0m\x1B[31mGoodbye, have a nice day!\x1B[0m\x1B[33m 自o（^_^ ）\x1B[0m\n";
		return (0);
}
