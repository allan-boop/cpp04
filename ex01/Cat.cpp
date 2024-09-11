#include "Cat.hpp"
#include <iostream>
#include <cstdlib>

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*cat._brain)) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    if (this != &cat) {
        Animal::operator=(cat);
        delete _brain;
        _brain = new Brain(*cat._brain);
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}