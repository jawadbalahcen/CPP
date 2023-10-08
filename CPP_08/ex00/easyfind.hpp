/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:47:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/07 21:23:37 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& cont, int value)
{
    typename T::iterator val = std::find(cont.begin(), cont.end(), value);
    if (*val == value)
        return val;
    throw std::runtime_error("Element not found");
}
