/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/14 18:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal"), _brain(new Brain())
{
	std::cout << "Animal default created." << std::endl;
}

Animal::Animal(const Animal &origin) : _type(origin._type), _brain(new Brain(*origin._brain))
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal( void )
{
	delete _brain;
	std::cout << "Animal " << _type << " destructed." << std::endl;
}

Animal& Animal::operator=(const Animal& origin)
{
    std::cout << "Animal copy assignment operator called" << std::endl;

    if (this != &origin)
    {
        _type = origin._type;
		delete _brain;
		_brain = new Brain(*origin._brain);
    }
    return (*this);
}


//Getters
std::string Animal::getType() const
{
	return(_type);
}


//Functions
void Animal::makeSound() const
{
    std::cout << "Undefined animal sound." << std::endl;
}
