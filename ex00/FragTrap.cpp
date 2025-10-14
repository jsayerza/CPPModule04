/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/12 12:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	_hitPoints		= 100;
	_energyPoints	= 100;
	_attackDamage	= 30;
	std::cout << "FragTrap default created." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints		= 100;
	_energyPoints	= 100;
	_attackDamage	= 30;
	std::cout << "FragTrap " << _name << " created." << std::endl;
}

FragTrap::FragTrap(const FragTrap &origin) : ClapTrap(origin)
{
    *this = origin;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap " << this->_name << " destructed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &origin)
{
    if (this != &origin)
        ClapTrap::operator=(origin);
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (!checkPoints())
	{
		std::cout << "FragTrap " << this->_name;
		std::cout << " cannot attack due hasn't points!" << std::endl;
		return;
	}
	this->setEnergyPointsLost(1);
	std::cout << "FragTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a positive high five!" << std::endl;
}
