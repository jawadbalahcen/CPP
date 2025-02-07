/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:03:39 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/15 02:10:01 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal
{
  protected:
    std::string type;
  public:
    Animal();
    Animal(const Animal &copy);
    Animal& operator=(const Animal& obj);
    virtual ~Animal();
    virtual void makeSound() const = 0;
    virtual std::string getType() const = 0;
};

#endif