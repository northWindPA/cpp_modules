#include "Squad.hpp"

Squad::Squad()
: _squad_count(0), _units(nullptr)
{}

Squad::Squad(Squad const &copy)
: _squad_count(0), _units(nullptr)
{
	if (copy._units)
	{
		_units = new ISpaceMarine*[copy._squad_count];
		int i = 0;
		while (i < copy._squad_count)
		{
			_units[i] = copy._units[i]->clone();
			i++;
		}
	}
}

Squad::~Squad()
{
	int i = 0;
	while (i < _squad_count)
	{
		if (_units[i])
			delete _units[i];
		i++;
	}
	delete[] _units;
	std::cout << "Squad destructor called" << std::endl;
}

Squad &Squad::operator = (Squad const &copy)
{
	if (this == &copy)
		return *this;
	for (int i = 0; i < _squad_count; ++i)
		if (_units[i])
			delete _units[i];
	delete[] _units;
	_squad_count = copy._squad_count;
	if (copy._units)
	{
		_units = new ISpaceMarine*[_squad_count];
		int i = 0;
		while (i < _squad_count)
		{
			_units[i] = copy._units[i]->clone();
			i++;
		}
	}
	else
		_units = nullptr;
	return *this;
}

int Squad::get_count() const
{
	return _squad_count;
}

ISpaceMarine* Squad::get_unit(int index) const
{
	if (index >= _squad_count || _squad_count == 0 || index < 0)
		return nullptr;
	return (_units[index]);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return _squad_count;
	if (_units)
	{
		int i = 0;
		while (i < _squad_count)
		{
			if (_units[i] == unit)
				return (_squad_count);
			i++;
		}
		ISpaceMarine **copy = new ISpaceMarine*[_squad_count + 1];
		i = 0;
		while (i < _squad_count)
		{
			copy[i] = _units[i];
			i++;
		}
		delete [] _units;
		_units = copy;
		_units[_squad_count] = unit;
		_squad_count++;
	}
	else
	{
		_units = new ISpaceMarine*[1];
		_units[0] = unit;
		_squad_count++;
	}
	return (_squad_count);
}