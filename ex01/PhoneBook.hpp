/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 19:46:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/25 16:22:26 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <cctype>
# include <iostream>
# include <iomanip>
class Contact
{
  public:
	int index;
	std::string First_name;
	std::string Last_name;
	std::string Nick_name;
	std::string Dark_secret;
	std::string Phone_number;
	Contact()
	{
		index = -1;
	}
	void assign(std::string Fname, std::string Lname, std::string Nname,
		std::string Dsecret, std::string Pnumber)
	{
		First_name = Fname;
		Last_name = Lname;
		Nick_name = Nname;
		Dark_secret = Dsecret;
		Phone_number = Pnumber;
	}
};

class PhoneBook
{
  public:
	Contact contcats[8];
};

//declaration 
void	search(PhoneBook phonbook);

#endif