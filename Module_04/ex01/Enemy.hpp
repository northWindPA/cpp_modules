#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy
{
	protected:
		Enemy();
		int _hp;
		std::string _type;

	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		Enemy(Enemy const &copy);
		Enemy &operator = (Enemy const &copy);

		std::string const get_type() const;
		int get_hp() const;
		virtual void take_damage(int damage);
};

#endif
