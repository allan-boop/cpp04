#pragma once

#include <iostream>

typedef std::string str;

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(str type);
		WrongAnimal(const WrongAnimal &Wronganimal);
		WrongAnimal &operator=(const WrongAnimal &Wronganimal);
		virtual ~WrongAnimal();
		virtual void makeSound() const;
		str getType() const;

	protected:
		str _type;
};