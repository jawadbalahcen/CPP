/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 19:39:44 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/11 18:09:02 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed find_area(Point const a, Point const b, Point const c)
{
    //X1.Y2 + X2.Y3 + X3.Y1  - (X1.Y3 + X2.Y1 + X3.Y2)
    Fixed value = (a.get_x()*b.get_y() + b.get_x()*c.get_y() + c.get_x()*a.get_y())
                - (a.get_x()*c.get_y() + b.get_x()*a.get_y() + c.get_x()*b.get_y());
    if (value < 0)
        value = value * -1;
    return (value / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed main_triangle = find_area(a, b, c);

    Fixed sub_triangle_a = find_area(a, b, point);
    Fixed sub_triangle_b = find_area(a, c, point);
    Fixed sub_triangle_c = find_area(c, b, point);
    if (sub_triangle_a  == 0 ||  sub_triangle_b == 0 ||  sub_triangle_c  == 0)
        return (0);
    return (sub_triangle_a + sub_triangle_b + sub_triangle_c == main_triangle);
}


