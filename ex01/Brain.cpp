/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/18 13:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Brain.hpp"

Brain::Brain(void)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = "\0";
	}
	std::cout << "Brain constructor called" << std::endl;

	this->_ideas[0] = "Idea0";
}

Brain::Brain(const Brain &origin)
{
	std::cout << "Brain copy pointer constructor called" << std::endl;
	*this = origin;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& origin)
{
	if (this != &origin)
		for (size_t i = 0; i < 100; i++)
		{
			this->_ideas[i] = origin._ideas[i];
		}
	return (*this);
}
