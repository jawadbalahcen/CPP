/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:32:37 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/30 18:47:05 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <cstdlib>
int main()
{
	std::string COMMENTS[4];
	COMMENTS[0] = "DEBUG";
	COMMENTS[1] = "INFO";
	COMMENTS[2] = "WARNING";
	COMMENTS[3] = "ERROR";
	Harl harl;
	int randomNumber;
	for (int i = 0; i < 15; i++)
	{
		randomNumber = std::rand() % (3 + 1);
		harl.complain(COMMENTS[randomNumber]);
	}
}