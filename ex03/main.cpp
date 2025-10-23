/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/23 13:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

//Test	
	// std::cout << std::endl;
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// src->learnMateria(new Cure());
	// std::cout << std::endl;
//

	ICharacter* me = new Character("me");
	// std::cout << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;

//Test
	// std::cout << std::endl;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// delete tmp;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// delete tmp;
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// delete tmp;
	// std::cout << std::endl;
	// me->unequip(2);
	// std::cout << std::endl;

	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// delete tmp;
	// std::cout << std::endl;
//

	ICharacter* bob = new Character("bob");
	// std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	// std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	return (0);
}

