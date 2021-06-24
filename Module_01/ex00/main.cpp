#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony_horse = Pony();
	pony_horse.pony_attributes("Atlanta", "Female", "Dartmoor", 3);
	std::cout << "This is " << pony_horse.set_name() << std::endl;
	std::cout << "Gender is " << pony_horse.set_gender() << std::endl;
	std::cout << "Breed is " << pony_horse.set_breed() << std::endl;
	std::cout << "Age is " << pony_horse.set_age() << std::endl;
}

void	ponyOnTheHeap()
{
	Pony *pony_horse = new Pony();
	pony_horse->pony_attributes("Morgan", "Male", "British Riding", 6);
	std::cout << "This is " << pony_horse->set_name() << std::endl;
	std::cout << "Gender is " << pony_horse->set_gender() << std::endl;
	std::cout << "Breed is " << pony_horse->set_breed() << std::endl;
	std::cout << "Age is " << pony_horse->set_age() << std::endl;
	delete(pony_horse);
}

int		main()
{
	std::cout << "=======================================================" << std::endl;
	ponyOnTheStack();
	std::cout << "=======================================================" << std::endl;
	ponyOnTheHeap();
	std::cout << "=======================================================" << std::endl;
	return 0;
}
