/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:06:50 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/14 00:32:21 by jbalahce         ###   ########.fr       */
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
    public:
        DiamondTrap();
        DiamondTrap(const std::string& Name);
        void attack(const std::string& target);
        void whoAmI();
};

#endif