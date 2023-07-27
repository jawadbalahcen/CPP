/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:07:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 15:26:07 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(DiamondTrap const & copy)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & obj)
{
	std::cout << "DiamondTrap Copy assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        name = obj.name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& Name) : ClapTrap(Name + "_clap_name"), name(Name) 
{
    std::cout << "DiamondTrap para Constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "name: " << name << " claptrap name: " << ClapTrap::name + "\n";
}

