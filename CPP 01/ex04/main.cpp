/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:15:31 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/30 16:25:27 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindReplace.hpp"

int main(int ac , char *av[])
{

	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments\n";
		return (1);
	}
	std::string buffer;
	std::ifstream file;
	std::ofstream file1;
	FindReplace main = FindReplace(av[1], av[2], av[3], file, file1);
	if (main.check_error())
		return (1);
	main.read_file(buffer);
	main.replace(buffer);
}