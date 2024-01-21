/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:35:12 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 21:40:04 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, 25, 5) , target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("PresidentialPardonForm", false, 25, 5), target(Target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)  : AForm(copy) {
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
        target = obj.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

//execute
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getIs_signed())
        throw (AForm::FormNotSignedException());
    if (executor.getGrade() > getExe_grade())
        throw (AForm::GradeTooLowException());
    
    std::cout << target + " has been pardoned by Zaphod Beeblebrox.\n";
}