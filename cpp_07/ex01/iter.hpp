/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:47:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/06 15:55:02 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename Func>
void iter(T* array, size_t length, Func func)
{
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

template <typename T>
void print(T &a)
{
    std::cout << a << std::endl;
}
