/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:22:17 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/29 14:41:25 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern A;
	
	PresidentialPardonForm a;
	PresidentialPardonForm b(a);

	AForm *tes1 = A.makeForm("ShrubberyCreationForm", "target");
	AForm *tes2 = A.makeForm("NON", "tar");
	AForm *tes3 = A.makeForm("RobotomyRequestForm", "TTT");
	AForm *tes4 = A.makeForm("PresidentialPardonForm", "targ");

	Bureaucrat B1("B1", 5);
	Bureaucrat B2("B2", 50);
	Bureaucrat B3("B3", 15);
	Bureaucrat B4("B4", 1);

	std::cout << "|" << a.getExe_grade() << "|" << std::endl;
	std::cout << "|" << b.getExe_grade() << "|" << std::endl;
	try
	{
		if (tes1)
		{
			B1.signForm(*tes1);
			B1.executeForm(*tes1);
		}
		std::cout << std::endl;
		if (tes2)
		{
			B2.signForm(*tes2);
			B2.executeForm(*tes2);
		}
		std::cout << std::endl;
		if (tes3)
		{
			B3.signForm(*tes3);
			B3.executeForm(*tes3);
		}
		std::cout << std::endl;
		if (tes4)
		{
			B4.signForm(*tes4);
			B4.executeForm(*tes4);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}