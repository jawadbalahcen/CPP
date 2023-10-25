/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:24:12 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/25 10:13:46 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>

class PmergeMe
{
    private:
        std::vector<int> vector_nums;
        std::deque<int> deque_nums;

    private:
        void validate(char **av);
        void is_digit(char *str);
        template <typename T>
        int smaller(int index,T &nums);
        template <typename T>
        double sort(T &nums);
        void print_nums(std::string str);
        
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(char **av);
        PmergeMe(PmergeMe &obj);
        PmergeMe &operator=(const PmergeMe &obj);
};

void Error();