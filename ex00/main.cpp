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
	delete cat2;
	delete animal;

	return (0);
}
