/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:55:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/06 16:06:41 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::cout << "Testing with Float" << std::endl;
    float farr[] = {0.f, 5.f, 6.1f, 12.f};
    iter(farr, 4, print<float>);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with Double" << std::endl;
    double darr[] = {0.01, 5.002, 7.1002, 12.002};
    iter(darr, 4, print<double>);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with Int" << std::endl;
    int iarr[] = {0, 62, 65, 127};
    iter(iarr, 4, print<int>);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with char" << std::endl;
    char carr[] = {'a', 'b', 'c', 'd'};
    iter(carr, 4, print<char>);
    std::cout << "-----------------------------------" << std::endl;

    std::cout << "Testing with string" << std::endl;
    std::string sarr[] = {"s1", "s222", "str", "chain"};
    iter(sarr, 4, print<std::string>);
    std::cout << "-----------------------------------" << std::endl;
}