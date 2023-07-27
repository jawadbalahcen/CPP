/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:16:38 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 14:06:48 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap();
    FragTrap(FragTrap const & copy);
    FragTrap & operator=(FragTrap const & obj);
    FragTrap(const std::string& _name);
    ~FragTrap();
    void highFivesGuys(void);
    void attack(const std::string& target);
};


#endif
