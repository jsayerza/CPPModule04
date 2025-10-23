/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/22 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	// std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}	

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		this->_type = other._type;
	// std::cout << "Ice copy assignment operator called" << std::endl;
	return(*this);
}

Ice* Ice::clone() const
{
	return(new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

