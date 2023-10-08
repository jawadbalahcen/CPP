/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:43:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/08 17:38:40 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        std::vector<int> nums;
        for (int i = 1; i <= 100000; ++i)
            nums.push_back(i);
            
        std::list<int> nums1;
        for (int i = 450; i <= 460; ++i)
            nums1.push_back(i);
            
        Span span1(4);
        Span span2;
        // span2.addNumber(1); //exeption
        Span span3(100000);

        span2 = span3;
        
        span1.addNumber(5);
        span1.addNumber(0);
        span1.addNumber(0);
        span1.addNumber(10);
        // span1.addNumber(1); //exeption
        
        span2.addNumber(nums1.begin(), nums1.end());
        
        span3.addNumber(nums.begin(), nums.end());
        // span2.addNumber(nums.begin(), nums.end()); //exeption
        
        std::cout << "SPAN3 : ";
        span3.print_all();
        std::cout << "\n\n";
        
        std::cout << "SPAN1 : ";
        span1.print_all();
        std::cout << "\n\n";
        
        std::cout << "SPAN2 : ";
        span2.print_all();
        std::cout << "\n\n";
        
        std::cout << "The shortestspan for SPAN1 is : " << span1.shortestSpan()<< std::endl;
        std::cout << "The longestspan for SPAN1 is : " << span1.longestSpan()<< std::endl<< std::endl;
        
        std::cout << "The shortestspan for SPAN2 is : " << span2.shortestSpan()<< std::endl;
        std::cout << "The longestspan for SPAN2 is : " << span2.longestSpan()<< std::endl<< std::endl;

        std::cout << "The shortestspan for SPAN3 is : " << span3.shortestSpan()<< std::endl;
        std::cout << "The longestspan for SPAN3 is : " << span3.longestSpan()<< std::endl<< std::endl;

        Span span4;
        // span4.longestSpan(); //exeption
        // span4.shortestSpan(); //exeption
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}