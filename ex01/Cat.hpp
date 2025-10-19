/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/15 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	std::string	_sound;
	Brain* _brain;

public:
	Cat();
	Cat(const Cat& origin);
	~Cat();

	Cat& operator=(const Cat& origin);

	void makeSound() const;
	void setIdea(std::string idea) const;
	void getIdeas() const;

};

#endif