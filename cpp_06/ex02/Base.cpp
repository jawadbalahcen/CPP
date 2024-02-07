/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:38:09 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/05 18:44:19 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base *generate(void)
{
    int choice = std::rand() % 3;
    switch (choice)
    {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
        default: return NULL;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (const std::exception &e) {}
    
    try
    {
        B b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (const std::exception &e) {}

    try
    {
        C c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (const std::exception &e) {
        std::cout << "Unknown" << std::endl;
    }
}