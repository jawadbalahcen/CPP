/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:55:52 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/08 17:35:06 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : N(n) {}

Span::Span() : N(0) {}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->N = copy.N;
        this->numbers.assign(copy.numbers.begin(), copy.numbers.end());   
    }
    return (*this);
}

Span::~Span() {}

//-------------------------------------------------------

void Span::addNumber(int num)
{
    if (numbers.size() >= N)
        throw std::overflow_error("Span is full");
    numbers.push_back(num);
}

int Span::shortestSpan()
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Not enough numbers to calculate span");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    
    int minSpan = sortedNumbers[1] - sortedNumbers[0];
    for (size_t i = 2; i < sortedNumbers.size(); ++i)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan)
            minSpan = span;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw std::runtime_error("Not enough numbers to calculate span");

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int maxSpan = sortedNumbers[sortedNumbers.size() - 1] - sortedNumbers[0];
    return maxSpan;
}

void Span::print_all()
{
    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " | ";
}