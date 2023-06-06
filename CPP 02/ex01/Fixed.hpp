/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:17:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/06/06 18:50:41 by jbalahce         ###   ########.fr       */
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
	Fixed(Fixed &obj);
	Fixed& operator=(const Fixed& other);
	~Fixed();
  
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif