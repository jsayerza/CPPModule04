/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/14 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// void	displayStatusTable( DiamondTrap* trap[] )
// {

// 	std::cout << "|" << std::setw(17) << "Nom";
// 	std::cout << "|" << std::setw(6) << "Energy";
// 	std::cout << "|" << std::setw(6) << "Hit";
// 	std::cout << "|" << std::setw(6) << "Damage";
// 	std::cout << "|" << std::endl;
// 	std::cout << "|_________________|______|______|______|" << std::endl;

// 	for (int i = 0; i < 2; i++)
// 	{
// 		trap[i]->displayStatus();
// 	}
// 	std::cout << std::endl;
// }


int main( void )
{
	Animal an0;
	Animal an1("Dog");
	Animal an2("Cat");
	
	std::cout << std::endl;

	return (0);
}
