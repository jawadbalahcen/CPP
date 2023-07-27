/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 05:08:45 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 14:04:45 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain* brain;
  public:
    Cat();
    Cat(const Cat &copy);
    Cat& operator=(const Cat& obj);
    ~Cat();
    void makeSound() const;
    std::string getType() const;
    void *get_brain();
};

#endif