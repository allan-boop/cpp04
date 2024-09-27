#include "WrongCat.hpp"
#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &Wrongcat) : WrongAnimal(Wrongcat.getType()) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = Wrongcat;
}

WrongCat &WrongCat::operator=(const WrongCat &Wrongcat) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->getType() = Wrongcat.getType();
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	WrongAnimal::makeSound();
}