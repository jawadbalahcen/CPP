/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:26:11 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 11:26:39 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string _name) : name(_name)
{
	std::cout << "Character param Constructor called\n";
	for(int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character& Character::operator=(const Character& obj)
{
    if (this != &obj)
    { 
        for(int i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
            if (obj.inventory[i])
                this->inventory[i] = (obj.inventory[i])->clone();
        }
    }
    std::cout << "Character Copy assignment Constructor called" << std::endl;
    return (*this);
}

Character::Character(const Character &copy)
{
    for(int i = 0; i < 4; i++)
	{
		if ((copy.inventory)[i])
			(this->inventory)[i] = (copy.inventory[i])->clone();
	}
    std::cout << "Character Copy Constructor called" << std::endl;
}

Character::Character() : ICharacter() {
    std::cout << "Character Constructor called" << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
    std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
	{
		std::cout << this->name << " not a valid Materia\n";
		return ;
	}
	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->name << " can't equip more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	std::cout << this->name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && (this->inventory)[idx])
    {
		AMateria *ptr = (this->inventory)[idx];
	    std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
	    (this->inventory)[idx] = 0;  
    }
    else
        std::cout << "can't unequip that \n";
}

void Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << name;
	((this->inventory)[idx])->use(target);
}