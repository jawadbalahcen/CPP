/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:45:20 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 14:07:20 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap & FragTrap::operator=(FragTrap const & obj)
{
	std::cout << "FragTrap Copy assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        name = obj.name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    return (*this);
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30) {
    std::cout << "FragTrap default Constructor" << std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name, 100, 100, 30)
{
    std::cout << "FragTrap Constructor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " high Fives Guys !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
  if (hit_points > 0 && energy_points > 0)
  {
    std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
    energy_points--;
  }
  else
    std::cout << "FragTrap " << name << " can't attack due to insufficient energy points or hit points\n";
}