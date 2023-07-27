/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:16:38 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 14:35:37 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(ScavTrap const & copy);
    ScavTrap & operator=(ScavTrap const & obj);
    ScavTrap(const std::string& _name);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
};


#endif
