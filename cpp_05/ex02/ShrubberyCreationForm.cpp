/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:35:12 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 19:30:48 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, 145, 137) , target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("ShrubberyCreationForm", false, 145, 137), target(Target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj)
        target = obj.target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

//execute
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getIs_signed())
        throw (AForm::FormNotSignedException());
    if (executor.getGrade() > getExe_grade())
        throw (AForm::GradeTooLowException());
        
    std::ofstream outputFile((target + "_shrubbery").c_str());
    
    if (!outputFile)
        throw std::runtime_error("Error in outputfile");
    
    for (int i = 0; i < 50; i++)
    {   
        outputFile << "     *\n";
        outputFile << "    ***\n";
        outputFile << "   *****\n";
        outputFile << "  *******\n";
        outputFile << " *********\n";
        outputFile << "     |\n\n";
    }
    outputFile.close();
}