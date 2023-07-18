/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:41:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 23:58:40 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure& Cure::operator=(const Cure& obj)
{
    std::cout << "Cure Copy assignment Constructor called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

Cure::Cure(const Cure &copy)
{
    std::cout << "Cure Copy Constructor called" << std::endl;
	*this = copy;
}

Cure::Cure() {
    type = "cure";
}

Cure::~Cure() {}

Cure::Cure(std::string const & type)
{
    this->type = type;
}

Cure* Cure::clone() const
{
    Cure* new_materia = new Cure(this->type);
    return (new_materia);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() << "'s wounds *\n";
}