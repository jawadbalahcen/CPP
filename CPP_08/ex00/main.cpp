/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:43:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/07 21:23:32 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    int array[] = {45, 2, 6, 87, 100, 2, 6, 50, 1, 1};
    int array_size = sizeof(array) / sizeof(array[0]);
    std::list<int> numbers(array, array + array_size);
    std::vector<int> numbers1(array, array + array_size);
    std::vector<int>::iterator ite;
    try
    {
        std::cout << "--vector--\n";
        ite = easyfind(numbers1, 6);
        std::cout << "the number : " << *ite << " is at index: "<< std::distance(numbers1.begin(), ite)<< std::endl;
        ite = easyfind(numbers1, 45);
        std::cout << "the number : " << *ite << " is at index: "<< std::distance(numbers1.begin(), ite)<< std::endl;
        ite = easyfind(numbers1, 87);
        std::cout << "the number : " << *ite << " is at index: "<< std::distance(numbers1.begin(), ite)<< std::endl;
        ite = easyfind(numbers1, 100);
        std::cout << "the number : " << *ite << " is at index: "<< std::distance(numbers1.begin(), ite)<< std::endl;
        
        std::cout << "--list--\n";
        std::cout << *easyfind(numbers, 2) << std::endl;
        std::cout << *easyfind(numbers, 45) << std::endl;
        std::cout << *easyfind(numbers, 1) << std::endl;
        std::cout << *easyfind(numbers, 777777) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}