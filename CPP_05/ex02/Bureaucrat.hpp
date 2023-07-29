/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:18:28 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 21:53:19 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
  private:
    const std::string name;
    int grade;
  
  public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat& operator=(const Bureaucrat& obj);
    Bureaucrat(std::string Name, int Grade);
    
    const std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    
    void signForm(AForm &form);

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

    void executeForm(AForm const & form);
};
 
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur);

#endif
