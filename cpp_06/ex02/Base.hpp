/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:30:38 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/05 17:29:42 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BASE_H
# define BASE_H
#include <cstdlib>
#include <iostream>

class Base
{
  public:
    virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif