/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/19 21:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

void testDeepCopy()
{
    std::cout << "\n=== TESTING DEEP COPY ===" << std::endl;
    
    std::cout << "\n--- Creating original Dog ---" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->getBrain()->addIdea("Òssos bons!");
    originalDog->getBrain()->addIdea("No molen els gats!");
    
    std::cout << "\n--- Creating copy using copy constructor ---" << std::endl;
    Dog* copiedDog = new Dog(*originalDog);
    
    std::cout << "\n--- Original Dog ideas: ---" << std::endl;
    originalDog->getBrain()->getIdeas();
    
    std::cout << "\n--- Copied Dog ideas (should be same): ---" << std::endl;
    copiedDog->getBrain()->getIdeas();
    
    std::cout << "\n--- Modifying COPIED Dog ---" << std::endl;
    copiedDog->getBrain()->setIdea(2, "Modificat: Perseguir gats!");
    
    std::cout << "\n--- Original Dog ideas (should be UNCHANGED): ---" << std::endl;
    originalDog->getBrain()->getIdeas();
    
    std::cout << "\n--- Copied Dog ideas (should be CHANGED): ---" << std::endl;
    copiedDog->getBrain()->getIdeas();
    
    std::cout << "\n--- Comparing Brain addresses (should be DIFFERENT): ---" << std::endl;
    std::cout << "Original Brain address: " << originalDog->getBrain() << std::endl;
    std::cout << "Copied Brain address:   " << copiedDog->getBrain() << std::endl;
    
    if (originalDog->getBrain() != copiedDog->getBrain())
        std::cout << "OK! DEEP COPY: Diferents objectes Brain!" << std::endl;
    else
        std::cout << "KO! SHALLOW COPY: Iguals objectes Brain!" << std::endl;
    
    std::cout << "\n--- Deleting Dogs ---" << std::endl;
    delete originalDog;
    delete copiedDog;
}


void testAssignmentOperator()
{
    std::cout << "\n=== TESTING ASSIGNMENT OPERATOR ===" << std::endl;
    
    Dog dog1;
    dog1.getBrain()->addIdea("Original idea");
    
    Dog dog2;
    dog2 = dog1;  // Assignment operator
    
	std::cout << std::endl;
    std::cout << "Before modification:" << std::endl;
	std::cout << "Idees de dog1: ";
    dog1.getBrain()->getIdeas();
	std::cout << "Idees de dog2: ";
    dog2.getBrain()->getIdeas();
    
    dog2.getBrain()->setIdea(0, "Idea modificada");
    
    std::cout << "\nAfter modifying dog2:" << std::endl;
	std::cout << "Idees de dog1: ";
    dog1.getBrain()->getIdeas();
	std::cout << "Idees de dog2: ";
    dog2.getBrain()->getIdeas();
    
    if (dog1.getBrain() != dog2.getBrain())
        std::cout << "OK! DEEP COPY in assignment operator!" << std::endl;
    else
	{
        std::cout << "KO! SHALLOW COPY in assignment operator!" << std::endl;
	}

	std::cout << std::endl;
}

void testDoubleDelete()
{
    std::cout << "\n=== TESTING DOUBLE DELETE (should not crash) ===" << std::endl;
    
    {
        Dog dog1;
        Dog dog2(dog1);  // Copy constructor
        
        // Si fos shallow copy, ambdós dogs compartirien el mateix Brain
        // Al sortir de l'scope, ambdós intentarien borrar el mateix Brain → CRASH
        
    }  // Ambdós dogs es destrueixen aquí
    
    std::cout << "OK! No hi ha crash - deep copy funciona!" << std::endl;
}