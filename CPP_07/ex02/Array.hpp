/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:47:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/07 17:08:56 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <cstdlib>

template <typename T>
class Array {
    private:
        T* data;
        unsigned int length;

    public:
        Array() : data(NULL), length(0) {}

        Array(unsigned int n) : length(n)
        {
            data = new T[length];
            for (unsigned int i = 0; i < length; ++i)
                data[i] = T();
        }

        Array(const Array& other) : length(other.length)
        {
            data = new T[length];
            for (unsigned int i = 0; i < length; ++i)
                data[i] = other.data[i];
        }

        Array& operator=(const Array& other)
        {
            if (this != &other)
            {
                delete[] data;
                length = other.length;
                data = new T[length];
                for (unsigned int i = 0; i < length; ++i)
                    data[i] = other.data[i];
            }
            return *this;
        }

        ~Array() {
            delete[] data;
        }

        T& operator[](unsigned int index) {
            if (index >= length)
                throw std::out_of_range("Index out of bounds");
            return data[index];
        }

        unsigned int size() const {
            return length;
        }
};


