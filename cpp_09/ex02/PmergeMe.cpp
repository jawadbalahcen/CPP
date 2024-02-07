/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:24:06 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/25 10:15:41 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe &obj)
{
	*this = obj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	if (this != &obj)
	{
		this->vector_nums = obj.vector_nums;
		this->deque_nums = obj.deque_nums;
	}
	return (*this);
}

//------------------------------

PmergeMe::PmergeMe(char **av)
{
    double vec_time, deq_time;
    
    validate(av);
    
    print_nums("Before: ");
    vec_time = sort(vector_nums);
    deq_time = sort(deque_nums);
    print_nums("after:  ");
    
    std::cout << "Time to process a range of "<< vector_nums.size() << " elements with std::vector : "<< (vec_time / CLOCKS_PER_SEC) * 1000000 << " us\n";
    std::cout << "Time to process a range of "<< deque_nums.size() << " elements with std::deque : "<< (deq_time / CLOCKS_PER_SEC) * 1000000 << " us\n";
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
        vector_nums.push_back(std::atoi(av[i]));
        deque_nums.push_back(std::atoi(av[i]));
    }
}

template <typename T>
int PmergeMe::smaller(int index,T &nums)
{
    if (nums[index] > nums[index + 1])
        return (index + 1);
    return (index);
}

template <typename T>
double PmergeMe::sort(T &nums)
{
    clock_t start, end;
    int index_smaller;
    T small;
    
	start = clock();
    if (nums.size() > 1)
    {
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            index_smaller = smaller(i, nums);
            small.push_back(nums[index_smaller]);
            nums.erase(nums.begin() + index_smaller);
        }
        sort(nums);
    }
    while(small.size() > 0)
    {
        index_smaller = 0;
        while (nums[index_smaller] < small[0])
            index_smaller++;
        nums.insert(nums.begin() + index_smaller, small[0]);
        small.erase(small.begin());
    }
	end = clock();
    return (double(end - start));
}

void PmergeMe::print_nums(std::string str)
{
    std::cout << str;
    for (size_t i = 0; i < vector_nums.size() ; i++)
        std::cout << vector_nums[i] << " ";
    std::cout << std::endl;
}