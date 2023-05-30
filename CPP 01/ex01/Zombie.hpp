/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:52:13 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 16:02:50 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	
  public:
	void announce(void);
	Zombie(std::string Name) : name(Name) {}
	~Zombie()
	{
		std::cout << "Zombie: " + name + " is destroyed\n"; 	
	}
	Zombie(): name("Name"){}
  private:
	std::string name;

};
//declaration 
Zombie*	zombieHorde(int N, std::string name);

#endif
