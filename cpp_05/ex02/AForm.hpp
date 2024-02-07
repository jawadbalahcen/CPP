/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:32:58 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/29 12:27:46 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

class Bureaucrat;

class AForm 
{
  private:
    const std::string name;
    bool is_signed;
    const int sign_grade;
    const int exe_grade;

  public:
    AForm();
    AForm(std::string name, bool is_signed, const int sign_grade, const int exe_grade);
    AForm(const AForm &copy);
    AForm& operator=(const AForm& obj);
    virtual ~AForm();

//getters    
    std::string getName() const;
    bool getIs_signed() const;
    int getSign_grade() const;
    int getExe_grade() const;

    void beSigned(Bureaucrat &bur);

    class GradeTooLowException : public std::exception {
      public:
        const char* what() const throw() {
            return ("\033[31mgrade too low\033[0m");
        }
    };

    class GradeTooHighException : public std::exception {
      public:
        const char* what() const throw() {
            return ("\033[31mgrade too high\033[0m");
        }
    };

    class FormNotSignedException : public std::exception {
      public:
        const char* what() const throw() {
            return ("\033[31mform not signed\033[0m");
        }
    };

    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const AForm &Aform);

#endif 