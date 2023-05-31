/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:50:44 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/31 18:07:59 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	
	if (ac != 2 && (std::cout << "Wrong number of arguments\n"))
		return (1);
	
	int i;
	Harl harl;
	std::string COM = av[1];
	std::string COMMENTS[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for(i = 0; i < 4 && COMMENTS[i] != COM; i++);
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]\n";
			harl.complain("DEBUG");
		case 1:
			std::cout << "[ INFO ]\n";
			harl.complain("INFO");
		case 2:
			std::cout << "[ WARNING ]\n";
			harl.complain("WARNING");
		case 3:
			std::cout << "[ ERROR ]\n";
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}