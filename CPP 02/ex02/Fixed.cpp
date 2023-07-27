/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:46:27 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/25 11:26:25 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	value = obj.value; 
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj) {value = obj.getRawBits();}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const 
{
	return (value);
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed::Fixed(const int n) : value(n << frac_bits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float n) : value(std::roundf(n * (1 << frac_bits)))
{
	std::cout << "Float constructor called\n";
}

int Fixed::toInt( void ) const
{
	return(value / (1 << frac_bits));	
}

float Fixed::toFloat( void ) const
{
	float ret = value;
	return(ret / (1 << frac_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	double	floatingPointValue;

	floatingPointValue = (fixed.getRawBits());
	floatingPointValue /= (1 << 8);
	os << floatingPointValue;
	return (os);
}

//arithmetic operators

Fixed Fixed::operator+(const Fixed &obj)
{
	Fixed result;
 	result.setRawBits(this->getRawBits() + obj.getRawBits());
 	return (result);
}

Fixed Fixed::operator-(const Fixed &obj)
{
	Fixed result;
 	result.setRawBits(this->getRawBits() - obj.getRawBits());
 	return (result);
}

Fixed Fixed::operator*(const Fixed &obj)
{
	Fixed result;

 	result = Fixed(this->toFloat() * obj.toFloat());
 	return (result);
}

Fixed Fixed::operator/(const Fixed &obj)
{
	Fixed result;
	result = Fixed((this->toFloat() / obj.toFloat()));
	return (result);
}

//comparison operators

bool Fixed::operator>(const Fixed &obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

// (in/de)crement
Fixed& Fixed::operator++() // ++a
{
	*this = Fixed(this->toFloat() + EP);
	return ((*this));
}

Fixed& Fixed::operator--()
{
	*this = Fixed(this->toFloat() - EP);
	return ((*this));
}

Fixed Fixed::operator++(int a)
{	
	(void)a;

	Fixed ret = *this;
	*this = Fixed(this->toFloat() + EP);
	return (ret);
}

Fixed Fixed::operator--(int a)
{
	(void)a;
	Fixed ret = *this;
	*this = Fixed(this->toFloat() - EP);
	return (ret);
}
//dive

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}
