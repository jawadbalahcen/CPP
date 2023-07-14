/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:37:26 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/13 23:30:33 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
name("") ,hit_points(10), energy_points(10), attack_damage(0) {}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap Copy assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        name = obj.name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    return (*this);
}

ClapTrap::ClapTrap(std::string Name) : name(Name), hit_points(10), energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name, int hit_pts, int energy_pts, int attack_dmg)
: name(Name), hit_points(hit_pts), energy_points(energy_pts), attack_damage(attack_dmg)
{
  std::cout << "ClapTrap Parameterized Constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (hit_points > 0 && energy_points > 0)
  {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!\n";
    energy_points--;
  }
  else
    std::cout << "ClapTrap " << name << " can't attack due to insufficient energy points or hit points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (hit_points > 0)
  {
    std::cout << "ClapTrap " << name << " lost "<< amount << " hit points\n";
    hit_points -= amount;
  }
  else
    std::cout << "ClapTrap " << name << " already dead\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (hit_points > 0 && energy_points > 0)
  {
    std::cout << "ClapTrap " << name << " repaird " << amount << " hit points\n";
    hit_points += amount;
    energy_points--;
  }
  else
    std::cout <<  name + " can't repair\n";
}
