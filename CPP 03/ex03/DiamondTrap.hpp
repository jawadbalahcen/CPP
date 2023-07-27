/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:06:50 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 15:22:30 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include "FragTrap.hpp" 
#include "ScavTrap.hpp" 

class DiamondTrap : public FragTrap , public ScavTrap
{
    private:
        std::string name;
        using FragTrap::hit_points;
		using FragTrap::attack_damage;
		using ScavTrap::energy_points;
    public:
        DiamondTrap();
        DiamondTrap(DiamondTrap const & copy);
        DiamondTrap &operator=(DiamondTrap const & obj);
        ~DiamondTrap();
        DiamondTrap(const std::string& Name);
        void attack(const std::string& target);
        void whoAmI();
};

#endif