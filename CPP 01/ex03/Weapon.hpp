/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:38:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 21:56:19 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	
  private:
	std::string type;
	
  public:
	const std::string& getType();
	void setType(std::string newType);
	Weapon(std::string Type) : type(Type) {}
};

#endif