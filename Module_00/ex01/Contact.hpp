#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		int			iterator;
		std::string contacts[9][11];
		std::string	fill_name[11];
	public:
		Contact();
		~Contact();
		std::string	get_data();
		int			fill_contact();
		int			show_data();
		void		show_all(int n);
};

#endif
