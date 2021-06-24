#include "MateriaSource.hpp"

void MateriaSource::learn_materia(AMateria *amateria)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_sources[i] == nullptr)
		{
			_materia_sources[i] = amateria;
			break;
		}
	}
}

AMateria *MateriaSource::create_materia(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_sources[i])
			if (_materia_sources[i]->get_type() == type)
				return (_materia_sources[i]->clone());
	}
	return nullptr;
}

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		_materia_sources[i] = nullptr;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia_sources[i])
			delete _materia_sources[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 4; ++i) {
		if (_materia_sources[i])
		{
			delete _materia_sources[i];
			_materia_sources[i] = nullptr;
		}
	}
	return *this;
}
