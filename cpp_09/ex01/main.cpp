/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:23:43 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/14 16:57:35 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac , char **av)
{
    if (ac != 2)
        std::cout << "Please provide one expression to be calculated.\n";
    else 
        RPN rpn(av[1]);
}