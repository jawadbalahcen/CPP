/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:33:23 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/15 01:34:44 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat Copy assignment Constructor called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow !\n";
}

std::string Cat::getType() const
{
    return (type);
}