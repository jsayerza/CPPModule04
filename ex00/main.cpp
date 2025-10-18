/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/14 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void )
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* cat2 = cat;

	std::cout << "animal type: " << animal->getType() << " " << std::endl;
	std::cout << "cat type: " << cat->getType() << " " << std::endl;
	std::cout << "dog type: " << dog->getType() << " " << std::endl;
	std::cout << "cat2 type: " << cat2->getType() << " " << std::endl;

	std::cout << "animal sound: ";
	animal->makeSound();
	std::cout << "cat sound: ";
	cat->makeSound();
	std::cout << "dog sound: ";
	dog->makeSound();
	std::cout << "cat2 sound: ";
	cat2->makeSound();

	delete dog;
	delete cat;
	delete animal;


	std::cout << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "animal type: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "cat type: " << wrongCat->getType() << " " << std::endl;

	std::cout << "animal sound: ";
	wrongAnimal->makeSound();
	std::cout << "cat sound: ";
	wrongCat->makeSound();

	delete wrongCat;
	delete wrongAnimal;


	return (0);
}
