/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:53:17 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/12 21:59:26 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchage.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
    if (this != &obj)
        *this = obj;
}

BitcoinExchange& BitcoinExchange::operator = (const BitcoinExchange& obj)
{
    if (this != &obj)
    {
        this->mapc = obj.mapc;
    }
    return (*this);
}

bool BitcoinExchange::checkFormat(std::string fileName)
{
    int i = fileName.size() - 4;
    if (fileName.substr(i, fileName.size()).compare(".txt") == 0)
        return true;
    return false;
}

void BitcoinExchange::printFile(map &mapc)
{
    map::iterator it;
    for (it = mapc.begin(); it != mapc.end(); ++it)
        std:: cout << it->first << "           " << it->second << std::endl;
}


bool BitcoinExchange::checkDateFormat(std::string date)
{    
    int i = 0;
    while (date[i])
    {
        if (!isdigit(date[i]) && i != 4 && i != 7)
            return (false);
        if ((date[4] != '-' || date[7] != '-'))
            return (false);
        i++;
    }
    return (true);
}

int BitcoinExchange::daysInMonth(int month, int year)
{
        if (month == 6 || month == 9 || month == 11)
            return (30);
        else if (month == 2 && (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)))
        return (29);
    else if (month == 2)
        return (28);
    else
        return (31);
}

bool BitcoinExchange::checkNumber(std::string number)
{
    int year = atoi(number.substr(0, 4).c_str());
    int month = atoi(number.substr(5, 7).c_str());
    int day = atoi(number.substr(8, 10).c_str());
    int MonthShouldhave = daysInMonth(month, year);
    if (year >= 2009 && (month >= 01 && month <= 12) 
        && MonthShouldhave >= day)
        return (true);
    return (false);
}

bool BitcoinExchange::dateIsValid(std::string line, std::string date)
{
    if (date.length() == 10 && checkDateFormat(date) && checkNumber(date))
        return (true);
    std::cout << "Error: bad input => " << line << std::endl;
    return (false);
}

bool BitcoinExchange::valueIsValid(std::string line, std::string value)
{
    int i = 0; if (value[0] == '-' || value[0] == '+') i++;
    int c = 0; c = std::count(value.begin(), value.end(), '.');
    while (isdigit(value[i]) || value[i] == '.') i++;
    if (value[i] == '\0' && c <= 1)
    {
        long nb = atof(value.c_str());
        if (nb < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            return (false);
        }
        else if (nb > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            return (false);
        }
        return (true);
    }
    std::cout << "Error: bad input => " << line << std::endl;
    return (false);
}

map::iterator BitcoinExchange::getExchangeRate(std::string date, map &mapc)
{
    map::iterator it = mapc.find(date);
    if (it == mapc.end())
    {
        it = mapc.lower_bound(date);
        --it;
    }
    return (it);
}


void    BitcoinExchange::checkLineValidity(std::string line, map &mapc)
{
    size_t p = line.find('|');
    if (p == std::string::npos) { std::cout << "Error: bad input => " << line << std::endl; return; }

    if (line[p+-1] != ' ' || !isdigit(line[p+-2])) { std::cout << "Error: bad input => " << line << std::endl; return; }

    std::string date = line.substr (0, p - 1);
    std::string value = line.substr (p + 2, line.size());


    if (dateIsValid(line, date) == true && valueIsValid(line, value) == true)
    {
        map::iterator it; 
        it = getExchangeRate(date, mapc);
        std::cout << date << " => " << value << " = ";
        std::cout << it->second * atof(value.c_str()) << std::endl;
    }
}


void    BitcoinExchange::readFile(std::string fileName)
{
    if (checkFormat(fileName) == false) { std::cout << "Error: format not supported " << std::endl; return ; }

    std::ifstream ifs("data.csv", std::ios::in);
    if (!ifs.is_open () || ifs.fail()) { std::cout << "Error: file couldn't be opened .. " << std::endl; return ; }

    std::string line;
    std::getline(ifs, line);
    while (std::getline(ifs, line))
    {
        std::pair<std::string, double> sp;
        int comma_position = line.find(",");
        sp.first = line.substr(0, comma_position);
        sp.second = atof(line.substr(comma_position +1, line.size()).c_str());
        mapc.insert(sp);
    }

    std::ifstream ifs2(fileName.c_str(), std::ios::in);
    if (!ifs2.is_open ()) { std::cout << "Error: file couldn't be opened .. " << std::endl; return ; }

    std::getline(ifs2, line);
    if (line.compare("date | value") == 1) { std::cout << "Error: file couldn't be opened."; return; }

    while (std::getline(ifs2, line))
        checkLineValidity(line, mapc);

    ifs.close (); 
    ifs2.close ();
}