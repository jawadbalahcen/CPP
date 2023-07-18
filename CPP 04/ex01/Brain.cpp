/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 23:48:48 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/15 01:28:33 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Constructor" << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = "";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "Brain Copy assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}