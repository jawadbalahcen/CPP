/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:29:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/13 23:26:32 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
  protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;
    ClapTrap(std::string Name, int hit_pts, int energy_pts, int attack_dmg);

  public:
    ClapTrap();
    ClapTrap(const ClapTrap &copy);
    ClapTrap& operator=(const ClapTrap& obj);
    ClapTrap(std::string Name);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif