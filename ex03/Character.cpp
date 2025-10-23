/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/22 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name(""), _onFloorCount(0)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_onFloor[i] = NULL;
	// std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character& other) : _name(other._name), _onFloorCount(0)
{
	for (int i = 0; i < 4; i++)
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_onFloor[i] = NULL;
	// std::cout << "Character copy constructor called" << std::endl;
}

Character::Character(std::string const & name) : _name(name), _onFloorCount(0)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_onFloor[i] = NULL;
	// std::cout << "Character name constructor called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	for (int i = 0; i < 100; i++)
		if (this->_onFloor[i] != NULL)
			delete this->_onFloor[i];
	// std::cout << "Character destructor called" << std::endl;
}

Character& Character::operator=(const Character& other)
{
	// std::cout << "Character assignment operator constructor called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				_inventory[i] = NULL;
			}
		for (int i = 0; i < 4; i++)
		{
			if (other._inventory[i] != NULL)
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return(*this);
}


std::string const & Character::getName() const
{
	return(this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m->clone();
			// std::cout << "Character " << _name << " equiped with material " << m->getType() << ". Inventory[" << i << "]" << std::endl;
			return;
		}		
	// std::cout << "Character " << _name << "'s inventory is already full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >=0 && idx < 4 && this->_inventory[idx] != NULL)
	{
		addToNoFloor(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
		// std::cout << "Character " << _name << " dropped materia inventory[" << idx << "] on the floor." << std::endl;
		return;
	}
	// std::cout << "Cannot unequip Character " << _name << "' inventory." << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx >=0 && idx < 4 && this->_inventory[idx] != NULL)
	{
		this->_inventory[idx]->use(target);
	}
}

void Character::addToNoFloor(AMateria* m)
{
	if (_onFloorCount < 100)
		_onFloor[_onFloorCount++] = m;
}