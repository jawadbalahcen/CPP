/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:24:55 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/30 16:25:20 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindReplace.hpp"

void FindReplace::read_file(std::string &buffer)
{
	std::string read;
	
	while (!file.eof())
	{
		std::getline(file, read);
		if (!file.eof())
			read.append("\n");
		buffer.append(read);
	}
}

void FindReplace::replace(std::string buffer)
{
	std::size_t i = 0;
	std::size_t pos = buffer.find(s1);
	while (i < buffer.length())
	{
		if (i == pos)
		{
			file1 << s2;
			pos = buffer.find(s1, pos + s1.length());
			i += s1.length();
		}
		else
		{
			file1 << buffer[i];
			i++;
		}
	}
}

int FindReplace::check_error()
{	
	file.open(filename);
	if (!file)
	{
		std::cerr << "Input file, FAILED!\n";
		return (1);
	}
	file1.open(filename + ".replace");
	if (!file1)
	{
		std::cerr << "Output file, FAILED!\n";
		return (1);
	}
	return (0);
}
