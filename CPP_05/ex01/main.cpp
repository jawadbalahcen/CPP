/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:22:17 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 16:54:39 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form form1("form1", false, 1, 3);
		Form form2("form2", true, 4, 3);
		// Form form3("form3", false, 152, 3); // exeption
		
		Form form4 = form1;
		
		Bureaucrat bur1("bur1", 1);
		Bureaucrat bur2("bur2", 2);
		// Bureaucrat bur3("bur3", 160); // exeption
		
		bur1.signForm(form1);
		bur1.signForm(form2);
		// bur2.signForm(form1); // exeption
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    try
	{
		Form form5("form5", false, 0, 151);
	}
	catch(Form::GradeTooHighException &e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}