#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		Character();
		std::string _name;
		AMateria *_materia_pack[4];

	public:
		Character(std::string const &name);
		virtual ~Character();
		Character(Character const &copy);
		Character &operator = (Character const &copy);

		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
		std::string const &get_name() const;
};

#endif
