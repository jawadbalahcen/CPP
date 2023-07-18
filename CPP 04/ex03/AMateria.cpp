/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:41:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/16 04:23:40 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria& AMateria::operator=(const AMateria& obj)
{
    std::cout << "AMateria Copy assignment Constructor called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return (*this);
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = copy;
}

AMateria::AMateria() : type("default") {}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "default AMateria used on " << target.getName() << std::endl;
}
