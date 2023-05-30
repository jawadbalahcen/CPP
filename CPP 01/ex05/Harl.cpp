/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:32:28 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/30 18:26:00 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "deeeebug\n";
}

void Harl::info(void)
{
	std::cout << "inffooooooo\n";
}

void Harl::warning(void)
{
	std::cout << "warnnnnnning\n";
}

void Harl::error(void)
{
	std::cout << "errrorrr\n";
}

void	Harl::complain(std::string level)
{
	int index = 0;
	
	while (index < 4 && COMMENTS[index] != level)
		index++;
	if(index < 4)
		(this->*func_array[index])();
	else
		std::cerr << "No such level FOUND !\n";
}

