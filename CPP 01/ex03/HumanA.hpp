/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:38:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 21:20:59 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	
  private:
	std::string name;
	Weapon &weapon;
  public:
	void attack();
	HumanA(std::string Name, Weapon &weaponn) : name(Name),  weapon(weaponn) {}
	
};

#endif