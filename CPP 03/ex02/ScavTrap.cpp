/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 07:45:20 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 13:46:01 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & obj)
{
	std::cout << "ScavTrap Copy assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        name = obj.name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    return (*this);
}

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20) {
    std::cout << "ScavTrap default Constructor called" << std::endl;
};

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name, 100, 50, 20)
{
    std::cout << "ScavTrap Parameterized Constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
  if (hit_points > 0 && energy_points > 0)
  {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
    energy_points--;
  }
  else
    std::cout << "ScavTrap " << name << " can't attack due to insufficient energy points or hit points\n";
}