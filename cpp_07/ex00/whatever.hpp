/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:55:55 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/06 15:14:31 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T1>
void swap(T1 &a, T1 &b)
{
    T1 tmp = a;
    a = b;
    b = tmp;
}

template <typename T2>
T2 min(T2 &a, T2 &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T3>
T3 max(T3 &a, T3 &b)
{
    if (a > b)
        return (a);
    return (b);
}