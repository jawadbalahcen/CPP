/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:46:02 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/26 13:10:04 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("BIG EYE");
    
    a.attack("BIG NOSE");
    a.beRepaired(10);  
    a.takeDamage(45);
    a.attack("BIG MOUTH");
    a.beRepaired(10);

    return 0;
}
