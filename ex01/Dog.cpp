#include "Dog.hpp"

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
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
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
