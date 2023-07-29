/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:22:17 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/29 12:42:25 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp" 
#include "RobotomyRequestForm.hpp" 
#include "PresidentialPardonForm.hpp" 
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		ShrubberyCreationForm F1("T1");
		RobotomyRequestForm F2("T2");
		PresidentialPardonForm F3("T3");

		Bureaucrat B1("B1", 5);
		Bureaucrat B2("B2", 50);
		Bureaucrat B3("B3", 150);
		Bureaucrat B4("B4", 1);
		Bureaucrat B5("B5", 120);
		Bureaucrat B6("B6", 7);
		
		{
			B1.signForm(F1);
			B1.executeForm(F1);
		}
		std::cout << std::endl;
		// { //exeption
		// 	B3.signForm(F1);
		// 	B3.executeForm(F1);
		// }
		// std::cout << std::endl;
		{
			B4.signForm(F2);
			B4.executeForm(F2);
		}
		std::cout << std::endl;
		{
			B4.signForm(F3);
			B4.executeForm(F3);
		}
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	

	
}