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

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat default created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    // *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat " << this->_type << " destructed." << std::endl;
}

Cat& Cat::operator=(const Cat &origin)
{
    if (this != &origin)
        Cat::operator=(origin);
    std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}
