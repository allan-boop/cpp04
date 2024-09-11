#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const int n = 1;
	Animal *animals[n];
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < n; i++)
	{
		delete animals[i];
	}
	return 0;
}