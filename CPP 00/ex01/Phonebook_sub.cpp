/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook_sub.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:18:57 by jbalahce          #+#    #+#             */
/*   Updated: 2023/06/01 14:30:36 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int alpha(std::string s)
{
	for(std::size_t i = 0; i < s.length(); i++)
	{
		if (!std::isdigit(s.at(i)))
			return (0);
	}
	return (1);
}

std::string truncated(std::string s)
{
	if (s.length() <= 10)
		return (s);
	return(s.substr(0, 9) + ".");
}

void	print_contacts(PhoneBook phonbook)
{
	int	i;

	i = 0;
	std::cout << "\n---------------------------------------------\n";
	std::cout << "| index    |" << "first name" << "|last name |" << "nick name |\n";
	while (phonbook.contcats[i].index != -1 && i < 8)
	{
		std::cout << "|" << std::right << std::setw(10) << phonbook.contcats[i].index << "|"
					<< std::right << std::setw(10) << truncated(phonbook.contcats[i].First_name) << "|"
					<< std::right << std::setw(10) << truncated(phonbook.contcats[i].Last_name) << "|"
					<< std::right << std::setw(10) << truncated(phonbook.contcats[i].Nick_name) << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------\n\n";
}

void	search(PhoneBook phonbook)
{
	std::string	s;
	int 		i = 10;
	
	print_contacts(phonbook);
 	std::cout << "Enter the index : "; if ((!std::getline(std::cin, s))) std::exit(0);
	if (alpha(s) && !s.empty())
		i = std::atoi(s.data());
	if (i < 8 && i >= 0 && phonbook.contcats[i].index != -1)
	{
		std::cout << "First name : " << phonbook.contcats[i].First_name << std::endl
					<< "Last name : " << phonbook.contcats[i].Last_name << std::endl
					<< "Nick name : " << phonbook.contcats[i].Nick_name << std::endl
					<< "Dark secret : " << phonbook.contcats[i].Dark_secret << std::endl
					<< "Phonenumber : " << phonbook.contcats[i].Phone_number << std::endl;
	}
	else
		std::cout <<"NOT A VALID INDEX" << std::endl;
}