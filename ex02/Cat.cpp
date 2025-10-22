/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/15 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
    this->_type = "Cat";
	this->_brain = new Brain();
    std::cout << "Cat default created." << std::endl;
}

Cat::Cat(const Cat &origin) : AAnimal(origin)
{
	this->_brain = new Brain(*origin._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat " << _type << " destructed." << std::endl;
}

Cat& Cat::operator=(const Cat &origin)
{
    if (this != &origin)
	{
        AAnimal::operator=(origin);
		delete this->_brain;
		this->_brain = new Brain(*origin._brain);
    }
	std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return(this->_brain);
}
