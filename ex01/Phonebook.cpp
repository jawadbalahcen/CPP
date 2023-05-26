/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:37:26 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/25 16:21:15 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int add_field(std::string *s)
{
	std::string tmp_s;
	if (!std::getline(std::cin, tmp_s)) std::exit(0);
	if (tmp_s.empty())
		return (1);
	*s = tmp_s;
	return (0);
}

void add(int *i, Contact *c)
{
	int flag = 0;

	std::cout << "First_name : ", flag += add_field(&c->First_name);
	std::cout << "Last_name : ", flag += add_field(&c->Last_name);
	std::cout << "Nick_name : ", flag += add_field(&c->Nick_name);
	std::cout << "Dark_secret : ", flag += add_field(&c->Dark_secret);
	std::cout << "Phone_number : ", flag += add_field(&c->Phone_number);
	if (flag > 0)
		std::cout << "CONTACT NOT SAVED ! FIELD CAN'T BE EMPTY .\n";
	else
	{
		c->index = *i;
		(*i)++;
	}
}

int	main(void)
{
	PhoneBook phonbook;
	static int i = 0;
	std::string command;
	while (1)
	{
		std::cout << "phonbook$> ";
		std::getline(std::cin, command);
		if (command == "EXIT" || std::cin.eof())
			break ;
		if (command == "ADD")
		{
			add(&i, &phonbook.contcats[i]);
			i %= 8;
		}
		if (command == "SEARCH")
			search(phonbook);
	}
}