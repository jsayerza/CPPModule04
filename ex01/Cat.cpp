/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/15 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _brain(new Brain())
{
    this->_type = "Cat";
    std::cout << "Cat default created." << std::endl;
}

Cat::Cat(const Cat &origin) : Animal(origin), _brain(new Brain(*origin._brain))
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat( void )
{
	delete _brain;
	std::cout << "Cat " << _type << " destructed." << std::endl;
}

Cat& Cat::operator=(const Cat &origin)
{
    if (this != &origin)
	{
        Animal::operator=(origin);
		delete _brain;
		_brain = new Brain(*origin._brain);
    }
	std::cout << "Cat copy assignment operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meow" << std::endl;
}

void Cat::setIdea(std::string idea) const
{
	for (size_t i = 0; i < 100; i++)
	{
		if (_brain->_ideas[i] == "\0")
		{
			_brain->_ideas[i] = idea;
			// std::cout << "  idea[" << i << "]: '" << idea << "' -> " << _brain->_ideas[i] << "<-" << std::endl;
			return;
		}	
	}
}

void Cat::getIdeas() const
{
	for (size_t i = 0; i < 100; i++)
	{
		if (_brain->_ideas[i] == "\0")
		{
			return;
		}	
		std::cout << "  ideaCat[" << i << "]: " << _brain->_ideas[i] << std::endl;
	}
	std::cout << std::endl;
}