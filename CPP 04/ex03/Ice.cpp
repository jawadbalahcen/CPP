/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:41:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 07:01:20 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice& Ice::operator=(const Ice& obj)
{
    std::cout << "Ice Copy assignment Constructor called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Ice::Ice(const Ice &copy)
{
    std::cout << "Ice Copy Constructor called" << std::endl;
	*this = copy;
}

Ice::Ice() {
    type = "ice";
}

Ice::~Ice() {}

Ice::Ice(std::string const & type)
{
    this->type = type;
}

Ice* Ice::clone() const
{
    Ice* new_materia = new Ice(this->type);
    return (new_materia);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *\n";
}