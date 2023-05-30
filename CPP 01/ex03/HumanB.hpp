/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:38:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 21:55:33 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	
  private:
	std::string name;
	Weapon *weapon;
  public:
	void attack();
	void setWeapon(Weapon &weaponn);
	HumanB(std::string Name) : name(Name), weapon(nullptr) {}
	
};

#endif