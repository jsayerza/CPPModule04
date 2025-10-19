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

Dog::Dog(void) : _brain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog default created." << std::endl;
}

Dog::Dog(const Dog &origin) : Animal(origin), _brain(new Brain(*origin._brain))
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	delete _brain;
	std::cout << "Dog " << this->_type << " destructed." << std::endl;
}

Dog& Dog::operator=(const Dog &origin)
{
    if (this != &origin)
	{
        Animal::operator=(origin);
		delete _brain;
		_brain = new Brain(*origin._brain);
    }
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

Brain* Dog::getBrain() const
{
	return(this->_brain);
}

void Dog::makeSound() const
{
    std::cout << "bark" << std::endl;
}
