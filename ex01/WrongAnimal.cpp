#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : _type("Default Wronganimal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(str type) : _type(type) {
	std::cout << "WrongAnimal " << getType() << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Wronganimal) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = Wronganimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Wronganimal) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	_type = Wronganimal.getType();
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "I don't understand this Wrongdefault language!" << std::endl;
}

str WrongAnimal::getType() const {
	return _type;
}