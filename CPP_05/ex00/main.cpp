/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:22:17 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/28 16:59:03 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
       Bureaucrat a;
    //    Bureaucrat c("c",0);  // exception
    //    Bureaucrat b("b",200); // exception
       std::cout << a;
       a.increment();
       a.increment();
       std::cout << a;
       a.decrement();
       std::cout << a;
       a.decrement();
    //    a.decrement(); // exception
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
}