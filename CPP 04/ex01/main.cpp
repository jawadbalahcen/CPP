/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:30:29 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 14:22:39 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    { //deep copy
        Cat cat1;
        Cat cat2;
        cat2 = cat1;
        Cat cat3(cat2);
        Cat cat4 = cat3;

        std::cout << "CAT1: " << cat1.get_brain() << std::endl;
        std::cout << "CAT2: " << cat2.get_brain() << std::endl;
        std::cout << "CAT3: " << cat3.get_brain() << std::endl;
        std::cout << "CAT4: " << cat4.get_brain() << std::endl;
        std::cout << std::endl;
    }

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