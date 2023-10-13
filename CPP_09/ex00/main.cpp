/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbalahce <jbalahce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:43:00 by jbalahce          #+#    #+#             */
/*   Updated: 2023/10/13 17:26:18 by jbalahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#if 0
#include <chrono>
#include <regex>

bool isNumeric(const std::string& str)
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

bool isDateFormat(std::string& str)
{    
    std::regex pattern("\\d{4}-\\d{2}-\\d{2}");

    int year, month, day;
    if (!std::regex_match(str, pattern))
        return (0);
    if (sscanf(str.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
        return (0);
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return (0);
    return (1);
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

int validate(std::string &date, std::string &value)
{
    if (date.empty() || value.empty() || !isDateFormat(date) || !isNumeric(value))
        return (2);
    if (std::stod(value) < 0)
        return (0);
    if (std::stod(value) > 1000)
        return (1);
    return (10);
}

void search_value(std::map<std::string, double> &data_base, std::string &date, double value)
{
    std::map<std::string, double>::iterator it = data_base.lower_bound(date);
    if (it->first != date)
        it--;
    std::cout << date << " => " << value << " = " << value * it->second << std::endl;   
}

int result(const char *file, std::map<std::string, double> &data_base)
{
    std::ifstream infile;
    std::string line;
    std::string date;
    std::string value;
    size_t pos;
    std::string delim = " | ";
    
    infile.open(file);
    if (file == NULL || !infile.is_open())
        return (0);
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
            search_value(data_base, date, std::stod(value));
    }
    return (1);
}

int open_file(const char *file, std::map<std::string, double> &map_fill, std::string delim)
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
        value = std::stod(line.substr(pos + delim.size(), line.size() - pos + delim.size()));
        map_fill.insert(std::pair<std::string, double>(key, value));
    }
    return (1);
}

#endif

int main(int ac , char **av)
{    
    if (ac <= 2)
        BitcoinExchange btc(av[1]);
    else
        print_Error(5, "");
}