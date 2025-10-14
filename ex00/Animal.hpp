/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/14 18:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Animal
{
protected:
	std::string _type;

public:
	Animal();
	Animal(std::string type );
	Animal(const Animal &origin);
	~Animal();

	Animal& operator=(const Animal& origin);

	//Getters
	std::string	getType() const;

	//Setters
	void		setType(std::string const& type);
};

#endif