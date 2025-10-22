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

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal default created." << std::endl;
}

AAnimal::AAnimal(const AAnimal &origin) : _type(origin._type)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal " << _type << " destructed." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& origin)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (this != &origin)
        this->_type = origin._type;
    return (*this);
}

std::string AAnimal::getType() const
{
	return(this->_type);
}

void AAnimal::makeSound() const
{
    std::cout << "Undefined animal sound." << std::endl;
}
