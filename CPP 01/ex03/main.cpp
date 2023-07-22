/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:52:03 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/22 15:02:29 by jbalahce         ###   ########.fr       */
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
		club.setType("cat");
		bob.attack();
	}
	{
		Weapon  club = Weapon("knife");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("soard");
		jim.attack();
	}
}