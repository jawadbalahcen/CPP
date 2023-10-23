/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:23:44 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/23 21:57:14 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void Error()
{
    std::cout << "Error: not a valid set of numbers.\n";
    exit(1);
}

int main(int ac , char **av)
{
    if (ac < 2)
    {
        std::cout << "You need to provide numbers to sort.\n";
        return (0);            
    }

    PmergeMe sort_nums(&av[1]);

    sort_nums.print_nums();
        
}
