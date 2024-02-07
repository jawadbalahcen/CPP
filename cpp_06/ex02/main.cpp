/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:23:42 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/05 18:53:41 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    srand(time(NULL));  
    Base *p1 = generate();
    Base *p2 = generate();
    Base *p3 = generate(); 
    Base *p4 = NULL;
    
    identify(*p1);
    identify(*p2);
    identify(*p3);
    identify(*p4);
    std::cout << "\n";
    identify(p1);
    identify(p2);
    identify(p3);
    identify(p4);
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
}