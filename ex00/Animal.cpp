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

Animal::Animal(void) : _type("default")
{
	std::cout << "Animal default created." << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal " << this->_type << " created." << std::endl;
}

Animal::Animal(const Animal &origin)
{
    *this = origin;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal " << this->_type << " destructed." << std::endl;
}

Animal& Animal::operator=(const Animal& origin)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &origin)
    {
        this->_type = origin._type;
    }
    return *this;
}


//Getters
std::string Animal::getType() const
{
	return(this->_type);
}

//Setters & Action points functions
void	Animal::setType(std::string const& type)
{
	this->_type = type;
	std::cout << "Animal's type is: " << type << std::endl;

}
