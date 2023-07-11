/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:19:54 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/11 17:35:11 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point
{
  private:
    Fixed const x;
    Fixed const y;

  public:
    Fixed get_x() const;
    Fixed get_y() const;
    Point();
    Point(float a, float b);
    Point(const Point &obj);
	Point& operator=(const Point& other);
    ~Point();
};

Fixed find_area(Point const a, Point const b, Point const c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif