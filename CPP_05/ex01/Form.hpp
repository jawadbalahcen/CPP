/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:32:58 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 16:31:31 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
  private:
    const std::string name;
    bool is_signed;
    const int sign_grade;
    const int exe_grade;

  public:
    Form();
    Form(std::string name, bool is_signed, const int sign_grade, const int exe_grade);
    Form(const Form &copy);
    Form& operator=(const Form& obj);
    ~Form();

//getters    
    std::string getName() const;
    bool getIs_signed() const;
    int getSign_grade() const;
    int getExe_grade() const;

    void beSigned(Bureaucrat &bur);

    class GradeTooLowException : public std::exception {
      public:
        const char* what() const _NOEXCEPT {
            return ("\033[31mgrade too low\033[0m");
        }
    };

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const _NOEXCEPT {
            return ("\033[31mgrade too high\033[0m");
        }
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif 