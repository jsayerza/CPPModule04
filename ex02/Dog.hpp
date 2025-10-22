/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/15 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain* _brain;

public:
	Dog();
	Dog(const Dog& origin);
	~Dog();

	Dog& operator=(const Dog& origin);
		
	void makeSound() const;
	Brain* getBrain() const;
};

#endif