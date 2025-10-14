/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 14:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/12 14:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name"), ScavTrap(), FragTrap()
{
	_name 			= "default_diamond_name";
	_hitPoints		= FragTrap::_hitPoints;
	_energyPoints	= ScavTrap::_energyPoints;
	_attackDamage	= FragTrap::_attackDamage;
	std::cout << "DiamondTrap default created." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name 			= name;
	_hitPoints		= FragTrap::_hitPoints;
	_energyPoints	= ScavTrap::_energyPoints;
	_attackDamage	= FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &origin)
	: ClapTrap(origin), ScavTrap(origin), FragTrap(origin)
{
    *this = origin;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap " << this->_name << " destructed." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &origin)
{
    if (this != &origin)
        ClapTrap::operator=(origin);
    std::cout << "DiamondTrap copy assignment operator called" << std::endl;
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name;
    std::cout << ".   ClapTrap name: " << ClapTrap::_name << std::endl;
}
