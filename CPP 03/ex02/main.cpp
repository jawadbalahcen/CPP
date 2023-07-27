/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:46:02 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 14:11:02 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
   
    std::string s1 = "Yin";
	std::string s2 = "Dyroth";
	std::string s3 = "Freya";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);
	FragTrap fragtrap(s3);
	std::cout << std::endl;

	fragtrap.attack(s2);
	claptrap.attack(s2);
	scavtrap.attack(s1);
	std::cout << std::endl;

	fragtrap.attack(s2);
	fragtrap.attack(s2);
	fragtrap.attack(s2);
	fragtrap.attack(s2);
	std::cout << std::endl;

	fragtrap.highFivesGuys();
	std::cout << std::endl;

	fragtrap.beRepaired(18);

	fragtrap.takeDamage(50);

	fragtrap.takeDamage(50);

	fragtrap.beRepaired(20);
	fragtrap.attack(s2);

	std::cout << std::endl;
	return (0);
}
