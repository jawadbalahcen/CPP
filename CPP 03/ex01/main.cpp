/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:46:02 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 13:47:56 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
   std::string s1 = "hanzo";
	std::string s2 = "alpha";

	ClapTrap claptrap(s1);
	ScavTrap scavtrap(s2);

	std::cout << std::endl;
	claptrap.attack(s2);
	scavtrap.takeDamage(0);
	scavtrap.beRepaired(18);
	std::cout << std::endl;
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.takeDamage(20);
	scavtrap.attack(s1);
	claptrap.beRepaired(64);
	std::cout << std::endl;
	scavtrap.guardGate();
	scavtrap.attack(s1);
	std::cout << std::endl;
	scavtrap.takeDamage(100);
	scavtrap.takeDamage(1);
	scavtrap.attack(s2);
	scavtrap.beRepaired(200);
	
	std::cout << std::endl;
}
