/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/15 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default created." << std::endl;
}

Dog::Dog(const Dog &origin) : AAnimal(origin)
{
	this->_brain = new Brain(*origin._brain);
    std::cout << "Dog copy constructor called (deep copy)" << std::endl;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog " << this->_type << " destructed." << std::endl;
}

Dog& Dog::operator=(const Dog &origin)
{
    if (this != &origin)
	{
		this->_type = origin._type;
		*this->_brain = *origin._brain;
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Guau!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return(this->_brain);
}
