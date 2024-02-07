/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:31:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 19:29:12 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
         
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};

#endif