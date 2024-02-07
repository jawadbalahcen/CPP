/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:07:37 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/13 17:33:10 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange()
{
    infile.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &obj)
{
	*this = obj;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &obj)
{

	if (this != &obj)
		data_base = obj.data_base;
	
	return (*this);
}

BitcoinExchange::BitcoinExchange(const char * file_name)
{
    infile.open(file_name);
    if (!infile.is_open())
        exit(!print_Error(4, ""));
    
    if (!open_DB("data.csv", std::string(",")))
        exit(!print_Error(3, ""));
    result();
}

//----------------------------------------

int BitcoinExchange::open_DB(const char *file, std::string delim)
{
    std::ifstream infile;
    std::string line;
    size_t pos;
    std::string key;
    double value;

    infile.open(file);

    if (file == NULL || !infile.is_open())
        return (0);
        
    std::getline(infile, line);
    while (std::getline(infile, line))
    {
        pos = line.find(delim);
        key = line.substr(0, pos);
        value = std::atof(line.substr(pos + delim.size(), line.size() - pos + delim.size()).c_str());
        data_base.insert(std::pair<std::string, double>(key, value));
    }
    return (1);
}

void BitcoinExchange::result()
{
    std::string line;
    std::string date;
    std::string value;
    size_t pos;
    std::string delim = " | ";
    
    std::getline(infile, line);
    while (std::getline(infile, line))
    {
        date = ""; value = "";

        pos = line.find(delim);
        if (pos != std::string::npos)
        {
            date = line.substr(0, pos);
            value = line.substr(pos + delim.size(), line.size() - pos + delim.size());
        }
        if (print_Error(validate(date, value), line))
            search_value(date, std::atof(value.c_str()));
    }
}

bool BitcoinExchange::isNumeric(const std::string& str)
{
    int hasDecimalPoint = 0;
    char c; 

    for (size_t i = 0; i < str.length(); ++i)
    {
        
        c = str[i];
        if (std::isdigit(c) || (c == '-' && i == 0)) {}
        else if (c == '.' && !hasDecimalPoint && i != str.length() - 1)
            hasDecimalPoint = 1;
        else
            return 0;
    }
    return 1;
}

bool BitcoinExchange::isDateFormat(std::string& str)
{
    if (str.length() != 10)
        return false;

    if (str[4] != '-' || str[7] != '-')
        return false;

    int year = atoi(str.substr(0, 4).c_str());
    int month = atoi(str.substr(5, 2).c_str());
    int day = atoi(str.substr(8, 2).c_str());

    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;

    return true;
}

int BitcoinExchange::validate(std::string &date, std::string &value)
{
    if (date.empty() || value.empty() || !isDateFormat(date) || !isNumeric(value))
        return (2);
    if (std::atof(value.c_str()) < 0)
        return (0);
    if (std::atof(value.c_str()) > 1000)
        return (1);
    return (10);
}

void BitcoinExchange::search_value(std::string &date, double value)
{
    std::map<std::string, double>::iterator it = data_base.lower_bound(date);
    if (it->first != date)
        it--;
    std::cout << date << " => " << value << " = " << value * it->second << std::endl;   
}

int print_Error(int error, std::string str)
{
    if (error == 0)
        std::cout << "Error: not a positive number." << std::endl;
    if (error == 1)
        std::cout << "Error: too large a number." << std::endl;
    if (error == 2)
        std::cout << "Error: bad input => " << str << std::endl;
    if (error == 3)
        std::cout << "Error: cant open dataBASE file." << std::endl;
    if (error == 4)
        std::cout << "Error: could not open file." << std::endl;
    if (error == 5)
        std::cout << "Error: too many arguments." << std::endl;
    if (error > 5)
        return (1);
    return (0);
}