/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:47:36 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/13 17:34:54 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <map>
#include <iterator>
#include <fstream>
#include <string>

class BitcoinExchange
{
    private:
        std::map<std::string, double> data_base;
        std::ifstream infile;

    private:
        bool isNumeric(const std::string& str);
        bool isDateFormat(std::string& str);
        int validate(std::string &date, std::string &value);
        void search_value(std::string &date, double value);
        void result();
        int open_DB(const char *file, std::string delim);
        
    public:
        BitcoinExchange();
        BitcoinExchange(const char * file_name);
        BitcoinExchange(BitcoinExchange &lhs);
        BitcoinExchange &operator=(const BitcoinExchange &lhs);
        ~BitcoinExchange();
};

int print_Error(int error, std::string str);
