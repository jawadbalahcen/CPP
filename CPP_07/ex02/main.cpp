/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:55:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/07 16:31:31 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> arry1(8);
    Array<int> arry2(4);

    for (unsigned int i = 0; i < arry1.size(); i++)
        arry1[i] = i * 3;
        
    std::cout << "----------ARRY1 ELEMENTS----------\n";
    for (unsigned int i = 0; i < arry1.size(); i++)
        std::cout<< "At index "<< i <<" : " << arry1[i] << std::endl;
    std::cout << "----------------------------------\n";
    
    arry2 = arry1;
    
    std::cout << "----------ARRY2 ELEMENTS----------\n";
    for (unsigned int i = 0; i < arry2.size(); i++)
        std::cout<< "At index "<< i <<" : " << arry2[i] << std::endl;
    std::cout << "----------------------------------\n";

    std::cout << "ARRY1 SIZE: "<< arry1.size() << std::endl;
    std::cout << "ARRY2 SIZE: "<< arry2.size() << std::endl;

    std::cout << "----------EXCEPTION----------\n";
    try
    {
        arry1[-1];
    }catch (std::exception &e)
    {
        std::cout << "Error: "<< e.what() << std::endl;
    }
    std::cout << "------------------------------\n";

}