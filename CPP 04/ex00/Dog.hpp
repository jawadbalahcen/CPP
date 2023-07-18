/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:08:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/14 23:17:09 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_H
# define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
  public:   
    Dog();
    Dog(const Dog &copy);
    Dog& operator=(const Dog& obj);
    ~Dog();
    void makeSound() const;
    std::string getType() const;
};

#endif