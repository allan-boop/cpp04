#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <cstdlib>

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		Animal::operator=(dog);
		delete _brain;
		_brain = new Brain(*dog._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}
