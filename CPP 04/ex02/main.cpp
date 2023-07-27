/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:30:29 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 14:29:09 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    Animal *animals[6];
    
    for (int i = 0; i < 3; i++)
    {
        animals[i] = new Dog();
        animals[i + 3] = new Cat();
    }
    std::cout << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout<< "TYPE:   " << animals[i]->getType() + "  " << std::endl << "---> "; 
        animals[i]->makeSound();
    }
    std::cout << std::endl;
    for (int i = 0; i < 6; i++)
        delete animals[i];
}