/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 23:16:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/25 11:43:06 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(float a, float b) : x(a), y(b) {}

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point& Point::operator=(const Point& obj)
{
    (void)obj;
	return (*this);
}

Fixed Point::get_x() const
{
    return (x);
}

Fixed Point::get_y() const
{
    return (y);
}

