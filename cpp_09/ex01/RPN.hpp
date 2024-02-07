/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:24:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/14 17:17:00 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>

class RPN
{
    private:
        std::stack<int> stack;
        
    private:
        int pop_top();
        int isoperator(int c);
        void Error();

    public:
        RPN();
        RPN(std::string expresion);
        RPN(RPN &obj);
        RPN &operator=(const RPN &obj);
        ~RPN();
};