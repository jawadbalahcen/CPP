/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:02:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/08 16:04:52 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

// int main()
// {
//     Array<int> arry1(8);
//     Array<int> arry2(4);

//     for (unsigned int i = 0; i < arry1.size(); i++)
//         arry1[i] = i * 3;
        
//     std::cout << "----------ARRY1 ELEMENTS----------\n";
//     for (unsigned int i = 0; i < arry1.size(); i++)
//         std::cout<< "At index "<< i <<" : " << arry1[i] << std::endl;
//     std::cout << "----------------------------------\n";
    
//     arry2 = arry1;
    
//     std::cout << "----------ARRY2 ELEMENTS----------\n";
//     for (unsigned int i = 0; i < arry2.size(); i++)
//         std::cout<< "At index "<< i <<" : " << arry2[i] << std::endl;
//     std::cout << "----------------------------------\n";

//     std::cout << "ARRY1 SIZE: "<< arry1.size() << std::endl;
//     std::cout << "ARRY2 SIZE: "<< arry2.size() << std::endl;

//     std::cout << "----------EXCEPTION----------\n";
//     try
//     {
//         arry1[-1];
//     }catch (std::exception &e)
//     {
//         std::cout << "Error: "<< e.what() << std::endl;
//     }
//     std::cout << "------------------------------\n";

// }

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}