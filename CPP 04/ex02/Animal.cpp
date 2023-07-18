/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:27:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/16 00:49:25 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("place holder for animal type") {
    std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "Animal Copy assignment Constructor called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound \n";
}

std::string Animal::getType() const
{
    return (type);
}