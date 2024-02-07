/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:36:22 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/14 17:17:39 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN &obj)
{
	*this = obj;
}

RPN &RPN::operator=(const RPN &obj)
{
	if (this != &obj)
		this->stack = obj.stack;
	return (*this);
}

RPN::~RPN()
{
}


//------------------------------------------------

int RPN::pop_top()
{
    int num = stack.top();
    stack.pop();
    return (num);
}

int RPN::isoperator(int c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return (1);
    return (0);
}

void RPN::Error()
{
    std::cout << "Error\n";
    exit(1);
}

RPN::RPN(std::string expression)
{
    int first;
    int second;

    for (size_t i = 0; i < expression.length(); i++)
    {
        if (std::isdigit(expression[i]))
            stack.push(expression[i] - 48);
        else if (isoperator(expression[i]) && stack.size() > 1)
        {
            second = pop_top();
            first = pop_top();
            
            switch (expression[i])
            {
                case '+':
                    stack.push(first + second);
                    break;
                case '-':
                    stack.push(first - second);
                    break;
                case '*':
                    stack.push(first * second);
                    break;
                case '/':
                    stack.push(first / second);
                    break;
            }
        }
        else if (expression[i] != ' ')
            Error();
    }
    if (stack.size() != 1)
        Error();
    std::cout << stack.top() << std::endl;
    
}
