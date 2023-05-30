/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:52:03 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 22:06:12 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon  club = Weapon("gun");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("dick");
		bob.attack();
	}
	{
		Weapon  club = Weapon("knif");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("soard");
		jim.attack();
	}
}