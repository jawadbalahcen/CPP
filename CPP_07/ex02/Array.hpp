/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:47:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/06 17:10:49 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T* array, size_t length, void (*func)(T &))
{
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

template <typename T>
void print(T &a)
{
    std::cout << a << std::endl;
}

