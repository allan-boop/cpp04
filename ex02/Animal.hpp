#pragma once

#include <iostream>

typedef std::string str;

class Animal {
	public:
		Animal();
		Animal(str type);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();
		virtual void makeSound() const = 0;
		str getType() const;

	protected:
		str _type;
};