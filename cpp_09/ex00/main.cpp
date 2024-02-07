/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:43:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/13 17:26:18 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{    
    if (ac <= 2)
        BitcoinExchange btc(av[1]);
    else
        print_Error(5, "");
}