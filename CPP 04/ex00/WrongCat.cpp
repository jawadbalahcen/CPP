/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:33:23 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/14 23:35:07 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat Copy assignment Constructor called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

WrongCat::~WrongCat() { 
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Fake Meow!\n";
}

std::string WrongCat::getType() const
{
    return (type);
}