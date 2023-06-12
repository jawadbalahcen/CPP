/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:17:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/06/12 18:24:19 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_H
# define FIXED_H

#include <iostream>


class Fixed {
	
  private:
	int value;
	static const int frac_bits = 8;
	
  public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	Fixed(const int n);
	Fixed(const float n);
   
	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif