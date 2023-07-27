/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:08:34 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 14:18:22 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "Dog";
    std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog Copy Constructor called" << std::endl;
    if (this->type == "Dog")
        delete this->brain;
	this->type = copy.type;
	this->brain = new Brain(*(copy.brain));
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog Copy assignment Constructor called" << std::endl;
    if (this != &obj)
    {
        if (this->type == "Dog")
            delete this->brain;
        this->type = obj.type;
        this->brain = new Brain(*(obj.brain));
    }
    return (*this);
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "woof woof !\n";
}

std::string Dog::getType() const
{
    return (type);
}
