/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:17:47 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 14:45:20 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
  private:
    AMateria    *(inventory[4]);
    std::string name;
  public:
    Character(std::string name);
	  Character(Character const & ref);
	  ~Character();
	  Character();
	  Character &operator=(Character const & ref);

    std::string const & getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

};

#endif