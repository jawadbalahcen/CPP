/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:43:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/09 18:51:44 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "----Using MutantStack----\n";
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
        std::cout << "-------------------------\n";
    }
    {
        std::cout << "--------Using list-------\n";
        std::list<int> myList;

        myList.push_back(5);
        myList.push_back(17);

        std::cout << myList.back() << std::endl;

        myList.pop_back();

        std::cout << myList.size() << std::endl;

        myList.push_back(3);
        myList.push_back(5);
        myList.push_back(737);

        myList.push_back(0);

        std::list<int>::iterator it = myList.begin();
        std::list<int>::iterator ite = myList.end();

        ++it;
        --it;

        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }

        std::stack<int, std::list<int> > s(myList);
        std::cout << "-------------------------\n";
    }
    {
        std::cout << "-------Using vector------\n";
        std::vector<int> myvector;

        myvector.push_back(5);
        myvector.push_back(17);

        std::cout << myvector.back() << std::endl;

        myvector.pop_back();

        std::cout << myvector.size() << std::endl;

        myvector.push_back(3);
        myvector.push_back(5);
        myvector.push_back(737);

        myvector.push_back(0);

        std::vector<int>::iterator it = myvector.begin();
        std::vector<int>::iterator ite = myvector.end();

        ++it;
        --it;

        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }

        std::stack<int, std::vector<int> > s(myvector);
        std::cout << "-------------------------\n";
    }
    {
        std::cout << "-------Using deque-------\n";
        std::deque<int> mydeque;

        mydeque.push_back(5);
        mydeque.push_back(17);

        std::cout << mydeque.back() << std::endl;

        mydeque.pop_back();

        std::cout << mydeque.size() << std::endl;

        mydeque.push_back(3);
        mydeque.push_back(5);
        mydeque.push_back(737);

        mydeque.push_back(0);

        std::deque<int>::iterator it = mydeque.begin();
        std::deque<int>::iterator ite = mydeque.end();

        ++it;
        --it;

        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }

        std::stack<int, std::deque<int> > s(mydeque);
        std::cout << "-------------------------\n";
    }
    return 0;
}
