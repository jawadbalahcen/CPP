/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 01:30:29 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 11:57:54 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() 
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // const WrongAnimal* i = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "MORE TESTS "<< std::endl;

    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl;
    std::cout << "Dog->getType [" << dog->getType() << "] " << std::endl;
    std::cout << "Cat->getType [" << cat->getType() << "] " << std::endl;
    cat->makeSound();
    dog->makeSound(); 
    animal->makeSound();

    std::cout << std::endl;
    const WrongAnimal* wrong_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();

    std::cout << std::endl;
    wrong_cat->makeSound();
    wrong_animal->makeSound();

    std::cout << std::endl;
    delete animal;
    delete dog;
    delete cat;
    delete wrong_cat;
    delete wrong_animal;
    return 0;
}