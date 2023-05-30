/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:19:27 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/29 18:17:50 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie	{
	
  public:
	void announce(void);
	Zombie(std::string Name) : name(Name) {}
	~Zombie()
	{
		std::cout << "Zombie: " + name + " is destroyed\n"; 	
	}
  private:
	std::string name;
	

};

//declaration
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif