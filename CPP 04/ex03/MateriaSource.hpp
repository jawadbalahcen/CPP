/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:35:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/17 12:18:01 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria	*(inventory[4]);
  public:
	MateriaSource();
	MateriaSource(MateriaSource const & copy);
	~MateriaSource();
	MateriaSource & operator=(MateriaSource const & obj);
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
 
};

#endif
