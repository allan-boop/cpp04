#include "Animal.hpp"

Animal::Animal() : _type("Default animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(str type) : _type(type) {
	std::cout << "Animal " << getType() << " constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal assignation operator called" << std::endl;
	_type = animal.getType();
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "I don't understand this default language!" << std::endl;
}

str Animal::getType() const {
	return _type;
}