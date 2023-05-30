/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:16:21 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 16:32:19 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout<< "string: " << &string << std::endl;
	std::cout<< "stringPTR: " << stringPTR << std::endl;
	std::cout<< "stringREF: " << &stringREF << std::endl << std::endl;
	std::cout<< "VALUE string: " << string << std::endl;
	std::cout<< "VALUE stringPTR: " << *stringPTR << std::endl;
	std::cout<< "VALUE stringREF: " << stringREF << std::endl;
}