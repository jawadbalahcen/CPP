/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:18:58 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/21 19:37:29 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char *argv[])
{
	std::string str;
	std::size_t i;

	if (argc != 1)
	{
		for (i = 1; argv[i]; i++)
			str.append(argv[i]);
		for (i = 0; i < str.length(); i++)
			std::cout << (char)std::toupper(str.at(i));
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}