#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat &Wrongcat);
		WrongCat &operator=(const WrongCat &Wrongcat);
		~WrongCat();
		void makeSound() const;
};