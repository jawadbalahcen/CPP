/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:24:12 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/23 21:32:23 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

class PmergeMe
{
    private:
        std::vector<int> nums;

    private:
        void validate(char **av);
        void is_digit(char *str);
        int smaller(int index);
        void sort();
        
    public:
        PmergeMe(char **av);
        void print_nums();
};

void Error();