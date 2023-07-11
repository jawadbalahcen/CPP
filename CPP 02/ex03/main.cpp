/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:39:14 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/11 18:08:20 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
    Point a(0,-4);
    Point b(-4, 4);
    Point c(4,4);

    if (bsp(a, b, c, Point(1,0)))
        std::cout << "inside \n";
    else
        std::cout << "outside \n";
}