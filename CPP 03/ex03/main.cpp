/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:46:02 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 15:13:59 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::string s1 = "Cloude";
	std::string s2 = "Silvana";
	std::string s3 = "selena";
	std::string s4 = "kagura";

	DiamondTrap	diamondtrap(s4);
	std::cout << std::endl;
	
	diamondtrap.takeDamage(5);
	diamondtrap.beRepaired(18);
	std::cout << std::endl;

	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.guardGate();
	diamondtrap.attack(s2);
	std::cout << std::endl;

	diamondtrap.highFivesGuys();
	std::cout << std::endl;

	diamondtrap.whoAmI();
	std::cout << std::endl;

	diamondtrap.beRepaired(18);

	diamondtrap.takeDamage(50);

	diamondtrap.takeDamage(50);

	diamondtrap.beRepaired(20);
	diamondtrap.attack(s2);

	std::cout << std::endl;
	return (0);
}
