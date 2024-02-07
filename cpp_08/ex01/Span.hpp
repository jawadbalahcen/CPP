/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:47:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/08 17:35:16 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

class Span
{
  private:
    unsigned int N;
    std::vector<int> numbers;
  public:
    Span();
    Span(unsigned int n);
    Span(const Span &copy);
    Span &operator=(const Span &lhs);
    ~Span();
    
  public:
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();

    template <typename Iterator>
    void    addNumber(Iterator begin, Iterator end)
    {
        if (this->numbers.size() + std::distance(begin, end) > this->N)
            throw std::runtime_error("Span can't store all");
        std::copy(begin, end, std::back_inserter(this->numbers));
    }
    
    void print_all();
};
