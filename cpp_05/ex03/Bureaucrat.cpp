/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:28:47 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/29 11:36:08 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
    if (Grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    if (Grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    grade = Grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat() : name("default") , grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{        
    if (this != &obj)
        grade = obj.grade;
    return (*this);
}

const std::string Bureaucrat::getName() const { return(name); }

int Bureaucrat::getGrade() const { return(grade); }

void Bureaucrat::increment()
{
    if (grade <= 1)
        throw (Bureaucrat::GradeTooHighException());
    grade--;
}

void Bureaucrat::decrement()
{
    if (grade >= 150)
        throw (Bureaucrat::GradeTooLowException());
    grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur)
{
    os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
    return (os);
}

void Bureaucrat::signForm(AForm &form)
{
    form.beSigned(*(this));
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << ".\n";
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}