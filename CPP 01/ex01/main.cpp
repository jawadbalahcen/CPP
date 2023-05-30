/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 15:41:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/05/28 16:14:39 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie* zombies = zombieHorde(N, "fuck");

    for (int i = 0; i < N; i++){
        zombies[i].announce();
    }
	
	delete[] zombies;
    return 0;
}