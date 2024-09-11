#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongAnimal();
const WrongAnimal* l = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
k->makeSound();
l->makeSound();
meta->makeSound();
return 0;
}