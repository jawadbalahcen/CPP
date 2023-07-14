/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:46:02 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/13 07:40:40 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("fuck");
    
    a.attack("damn");
    a.beRepaired(10);  
    a.takeDamage(45);
    a.attack("damn");
    a.beRepaired(10);

    return 0;
}
