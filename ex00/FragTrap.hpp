/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 12:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/12 12:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& origin);
	~FragTrap();

	FragTrap& operator=(const FragTrap& origin);

	void attack(const std::string& target);
	void highFivesGuys(void);
};

#endif