/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/22 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria(void) : _type("undefinedd")
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	// std::cout << "AMateria " << type << " copy constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	// std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return(*this);
}


std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
