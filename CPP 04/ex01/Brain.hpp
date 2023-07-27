/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 23:42:51 by jbalahce          #+#    #+#             */
/*   Updated: 2023/07/27 12:29:15 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRIAN_H
# define BRIAN_H

#include <iostream>

class Brain 
{
  private:
    std::string ideas[100];
  public:
    Brain();
    Brain(const Brain &copy);
    Brain& operator=(const Brain& obj);
    ~Brain();
};


#endif