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
#include "Tests.hpp"

int main( void )
{
	// const Animal* animal = new Animal();
	const Cat* cat = new Cat();
	const Dog* dog = new Dog();

	// std::cout << "animal type: " << animal->getType() << " " << std::endl;
	std::cout << "cat type: " << cat->getType() << " " << std::endl;
	std::cout << "dog type: " << dog->getType() << " " << std::endl;
	std::cout << std::endl;

	cat->getBrain()->addIdea("Nova idea gatuna");
	std::cout << "Idees de cat: " << std::endl;
	cat->getBrain()->getIdeas();
	std::cout << std::endl;

	dog->getBrain()->addIdea("Nova idea perruna");
	dog->getBrain()->addIdea("i més ideees perrunes");
	std::cout << "Idees de dog: " << std::endl;
	dog->getBrain()->getIdeas();
	std::cout << std::endl;

	delete dog;
	delete cat;
	// delete animal;
	std::cout << std::endl;

	int num_objects = 4;
	std::cout << "Let's create and fill an array of " << num_objects << " Animal objects." << std::endl;
	const AAnimal* animal_array[num_objects];
	std::cout << num_objects/2 << " of it will be Dog objects." << std::endl;
	for (int i=0; i<(num_objects/2); i++)
	{
		animal_array[i] = new Dog();
	}
	std::cout << std::endl;
	std::cout << num_objects/2 << " of it will be Cat objects." << std::endl;
	for (int i=(num_objects/2); i<num_objects; i++)
	{
		animal_array[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << "Let's delete all Animal objects." << std::endl;
	for (int i=0; i<num_objects; i++)
	{
		delete animal_array[i];
	}
	std::cout << std::endl;

	testDeepCopy();
	testAssignmentOperator();
	testDoubleDelete();
	
	return (0);
}
