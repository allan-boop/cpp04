#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <cstdlib>

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*cat._brain)) {
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
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