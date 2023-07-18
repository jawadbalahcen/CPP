/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:53:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 06:58:08 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
  public:
    Ice();
    Ice(std::string const & type);
    Ice(const Ice &copy);
    Ice& operator=(const Ice& obj);
    ~Ice();
    Ice* clone() const;
    void use(ICharacter& target);
};

#endif