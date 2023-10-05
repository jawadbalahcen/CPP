/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:27:04 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/05 15:47:14 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SERIALIZER_H
# define SERIALIZER_H

#include "data.hpp"
#include <iostream>
#include <stdint.h>

class Serializer
{
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &copy);
        Serializer& operator=(const Serializer& obj);

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif