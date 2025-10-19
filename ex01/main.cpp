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
	const Animal* cat = new Cat();
	// const Animal* dog = new Dog();

	std::cout << "animal type: " << animal->getType() << " " << std::endl;
	std::cout << "cat type: " << cat->getType() << " " << std::endl;
	// std::cout << "dog type: " << dog->getType() << " " << std::endl;
	std::cout << std::endl;

	cat->setIdea("Nova idea gatuna");
	std::cout << "Idees de cat: " << std::endl;
	cat->getIdeas();
	std::cout << std::endl;

	animal->setIdea("Nova idea animal");
	animal->setIdea("i més ideees d'animal");
	std::cout << "Idees d'animal: " << std::endl;
	animal->getIdeas();
	std::cout << std::endl;


	// delete dog;
	delete cat;
	delete animal;

	return (0);
}
