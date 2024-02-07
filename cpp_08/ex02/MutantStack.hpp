/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:04:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/09 18:46:00 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack &obj) : std::stack<T>(obj) {}
        ~MutantStack() {}
        
        MutantStack &operator=(const MutantStack &copy)
        {
            if (this == &copy)
                return (*this);
            std::stack<T>::operator=(copy);
            return (*this);
        };

    public:
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }
};

