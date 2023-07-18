/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:08:03 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 23:58:48 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materiasource constructor called\n";
	for(int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy.inventory[i])
			this->inventory[i] = (copy.inventory[i])->clone();
	}
	std::cout << "Materiasource copy constructor called\n";
}

MateriaSource & MateriaSource::operator=(MateriaSource const & obj)
{
	std::cout << "Materiasource copy assignement constructor called\n";
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (obj.inventory[i])
			this->inventory[i] = (obj.inventory[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Materiasource destructor called\n";
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i < 4)
	{
        (this->inventory)[i] = m;
	    std::cout << "Materia " << m->getType() << " learned\n";
	}
    else
    	std::cout << "Can't learn more than 4 Materia";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while ((this->inventory)[i] && ((this->inventory)[i])->getType() != type && i < 4)
		i++;
	if (i < 4 && (this->inventory)[i])
	{
        std::cout << "Materia " << type << " created\n";
	    return (((this->inventory)[i])->clone());
	}
	std::cout << type << " materia does not exit\n";
	return (NULL);
}