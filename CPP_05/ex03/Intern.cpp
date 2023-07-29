/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:40:28 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/29 14:39:00 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &copy) {
    *this = copy;
}

Intern& Intern::operator=(const Intern& obj) {
    (void)obj;
    return (*this);
}

AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
    int i = -1;
    AForm *forms[3];
    std::string names[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    
    forms[0] = new ShrubberyCreationForm(form_target);
    forms[1] = new RobotomyRequestForm(form_target);
    forms[2] = new PresidentialPardonForm(form_target);

    for (int j = 0; j < 3; j++)
    {
        if (names[j] != form_name)
            delete forms[j];
        else
            i = j;
    }
    
    if (i != -1)
        return (forms[i]);
    std::cout << "\033[31mError:\033[0m Form \"" + form_name + "\" doesn't exist.\n";
    return (nullptr);
}
