/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/18 12:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &origin) : WrongAnimal(origin)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat " << this->_type << " destructed." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &origin)
{
    if (this != &origin)
        WrongAnimal::operator=(origin);
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat meow" << std::endl;
}
