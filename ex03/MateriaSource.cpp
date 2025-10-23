/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/23 14:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		_materias[i] = NULL;
	}
	// std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (other._materias[i] != NULL)
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
	// std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
		_materias[i] = NULL;
	}
	// std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
		_materias[i] = NULL;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (other._materias[i] != NULL)
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
	// std::cout << "MateriaSource assignment operator constructor called" << std::endl;
	return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (size_t i = 0; i < 4; i++)
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = m;
			// std::cout << "MateriaSource learned materia " << m->getType() << ". Memory[" << i << "]" << std::endl;
			return;
		}
	delete m;
	// std::cout << "MateriaSource' memory is already full." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (0);
}
