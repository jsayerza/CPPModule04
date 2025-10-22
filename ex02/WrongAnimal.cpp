/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/18 12:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &origin) : _type(origin._type)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal " << this->_type << " destructed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if (this != &origin)
    {
        this->_type = origin._type;
    }
    return (*this);
}


//Getters
std::string WrongAnimal::getType() const
{
	return(this->_type);
}


//Functions
void WrongAnimal::makeSound() const
{
    std::cout << "Undefined WrongAnimal sound." << std::endl;
}

