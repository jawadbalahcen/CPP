/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:33:26 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 16:37:29 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"



Form::~Form() {}

Form::Form(std::string _name, bool _is_signed, int _sign_grade, int _exe_grade) : name(_name) , is_signed(_is_signed), sign_grade(_sign_grade), exe_grade(_exe_grade)
{
    if (sign_grade > 150 || exe_grade > 150)
        throw (Form::GradeTooLowException());
    if (sign_grade < 1 || exe_grade < 1)
        throw (Form::GradeTooHighException());
}

Form::Form() : name("default") , is_signed(false), sign_grade(0), exe_grade(0) {}

Form::Form(const Form &copy) :  name(copy.name),
                                is_signed(copy.is_signed),
                                sign_grade(copy.sign_grade),
                                exe_grade(copy.exe_grade) {}

Form& Form::operator=(const Form& obj)
{        
    if (this != &obj)
        is_signed = obj.is_signed;
    return (*this);
}

void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() > sign_grade)
        throw (Form::GradeTooLowException());
        
    (is_signed == true) && std::cout << bur.getName() + " couldn't sign " + name + " because it is already signed\n";
    if (bur.getGrade() <= sign_grade && !is_signed)
    {
        is_signed = true;
        std::cout << bur.getName() + " signed " + name + "\n";
    }
}

//getters
std::string Form::getName() const { return(name); }
bool Form::getIs_signed() const { return(is_signed); }
int Form::getSign_grade() const { return(sign_grade); }
int Form::getExe_grade() const { return(exe_grade); }

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os <<"NAME: " << form.getName() << std::endl;
    os <<"SIGNED: " << form.getIs_signed() << std::endl;
    os <<"SIGN GRADE: " << form.getSign_grade() << std::endl;
    os <<"EXE GRADE: " << form.getExe_grade() << std::endl;
    return (os);
}
