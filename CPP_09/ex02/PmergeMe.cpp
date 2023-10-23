/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:24:06 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/23 21:30:48 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av)
{
    validate(av);
    sort();
}

void PmergeMe::is_digit(char *str)
{
    for (int i = 0; str[i] ; i++)
    {
        if (!std::isdigit(str[i]))
            Error();
    }
}

void PmergeMe::validate(char **av)
{
    for (int i = 0; av[i]; i++)
    {
        is_digit(av[i]);
        nums.push_back(std::stoi(av[i]));
    }
}

int PmergeMe::smaller(int index)
{
    if (nums[index] > nums[index + 1])
        return (index + 1);
    return (index);
}

void PmergeMe::sort()
{
    int index_smaller;
    std::vector<int> small;
    
    if (nums.size() > 1)
    {
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            index_smaller = smaller(i);
            small.push_back(nums[index_smaller]);
            nums.erase(nums.begin() + index_smaller);
        }
        sort();
    }
    while(small.size() > 0)
    {
        index_smaller = 0;
        while (nums[index_smaller] < small[0])
            index_smaller++;
        nums.insert(nums.begin() + index_smaller, small[0]);
        small.erase(small.begin());
    }
}
 
void PmergeMe::print_nums()
{
    for (size_t i = 0; i < nums.size() ; i++)
        std::cout << nums[i] << std::endl;
}