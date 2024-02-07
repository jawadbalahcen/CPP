/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:35:12 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 21:32:40 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45) , target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("RobotomyRequestForm", false, 72, 45), target(Target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {
    *this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    if (this != &obj)
        target = obj.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

//execute
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getIs_signed())
        throw (AForm::FormNotSignedException());
    if (executor.getGrade() > getExe_grade())
        throw (AForm::GradeTooLowException());

    std::cout << "BZZZZzz... some drilling noises\n";
    std::srand(time(NULL));
    if (std::rand() % 2)
        std::cout << target + " has been robotomized successfully.\n";
    else
        std::cout << "the robotomy failed for " + target + "\n";
}