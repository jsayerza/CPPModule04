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

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    // *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog " << this->_type << " destructed." << std::endl;
}

Dog& Dog::operator=(const Dog &origin)
{
    if (this != &origin)
        Dog::operator=(origin);
    std::cout << "Dog copy assignment operator called" << std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "bark" << std::endl;
}
