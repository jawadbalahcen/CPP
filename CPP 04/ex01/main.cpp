/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:30:29 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/15 01:57:10 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    Animal *animals[4];
    
    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    for (int i = 0; i < 2; i++)
        animals[i + 2] = new Cat();
    for (int i = 0; i < 4; i++)
        {std::cout<< "NAME   " << animals[i]->getType() + "  " << std::endl; 
        animals[i]->makeSound();}
        
    for (int i = 0; i < 4; i++)
        delete animals[i];
}