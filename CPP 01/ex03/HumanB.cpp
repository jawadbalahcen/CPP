/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:58:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 21:59:53 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (weapon != nullptr)
		std::cout << name + " attacks with their " + weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weaponn)
{
	weapon = &weaponn;
}