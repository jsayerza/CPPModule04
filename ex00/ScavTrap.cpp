/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 10:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/12 10:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap_default_name")
{
	_hitPoints		= 100;
	_energyPoints	= 50;
	_attackDamage	= 20;
	std::cout << "ScavTrap default created." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints		= 100;
	_energyPoints	= 50;
	_attackDamage	= 20;
	std::cout << "ScavTrap " << _name << " created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " destructed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &origin)
{
    if (this != &origin)
        ScavTrap::operator=(origin);
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (!checkPoints())
	{
		std::cout << "ScavTrap " << this->_name;
		std::cout << " cannot attack due hasn't points!" << std::endl;
		return;
	}
	this->setEnergyPointsLost(1);
	std::cout << "ScavTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}
