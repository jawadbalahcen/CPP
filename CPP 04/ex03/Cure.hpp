/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 00:53:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 23:42:58 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
  public:
    Cure();
    Cure(std::string const & type);
    Cure(const Cure &copy);
    Cure& operator=(const Cure& obj);
    ~Cure();
    Cure* clone() const;
    void use(ICharacter& target);
};

#endif