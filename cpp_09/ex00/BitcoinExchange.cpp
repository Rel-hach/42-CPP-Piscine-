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

bool BitcoinExchange::checkFormat(std::string fileName)
{
    if (fileName.compare("input.txt") == 0)
        return (true);
    else
        return (false);
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
    else if (month == 2 && (year % 400 == 0 || (year % 100!=0 && year %4  == 0)))
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

bool BitcoinExchange::checkDateValidity(std::string s, std::string date)
{
    if (date.length() == 10 && checkDateFormat(date) && checkNumber(date))
        return (true);
    std::cout << "Error: bad input => " << s << std::endl;
    return (false);
}

bool BitcoinExchange::checkValueValidity(std::string s, std::string value)
{
    int c = std::count(value.begin(), value.end(), '.');
    int i = 0; while (isdigit(value[i]) || value[i] == '.') i++;
    if (value[i] == '\0' && c <= 1)
    {
        long nb = std::stod(value);
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
    std::cout << "Error: bad input => " << s << std::endl;
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

bool BitcoinExchange::checkLineValidity(std::string s, map &mapc)
{
    // check if there is a pipe .. 
    size_t position = s.find ('|');
    // '@' if not error is returned  or there is no space before pipe
    if (position == std::string::npos || s[position +- 1] != ' ' || !isdigit(s[position +- 2]))
    {
        std::cout << "Error: bad input => " << s << std::endl;
        return (false);
    }
    // copy from the start till | - the space
    std::string date = s.substr (0, position - 1);
    // check that there is a space then a number.
    std::string value = s.substr (position + 2, s.size());
    if (checkDateValidity(s, date) && checkValueValidity(s, value)) {
        map::iterator it;
        it = getExchangeRate(date, mapc);
        std::cout << date << " => " << value << " = ";
            std::cout << it->second * std::stod(value) << std::endl;
        return (true);
    }
    return (false);
}

void BitcoinExchange::readFile (std::string fileName, std::string fileName2)
{
    // check file format if valid 
    //if (!checkFormat(fileName)) return ;
    // creating a stream class to read from a file. 
    std::ifstream infile;
    infile.open(fileName, std::ios::in);
    if (infile.fail())
    {
        std::cout << "Error: an error occurs ." << std::endl;
        return ;
    }
    std::string line;
    std::getline(infile, line);
    // check the first line if good, if not return .
    if (line.compare("date,exchange_rate"))
    {
        std::cout << "Error: file content is syntaxly wrong .." << std::endl;
        return ;
    }
    // keep reading and put in a container the evolution of bitcoion price 
    while (std::getline(infile, line))
    {
        std::pair<std::string, double> Pair;
        int pos = line.find(',');
        Pair.first = line.substr(0,  pos);
        if (isdigit(line.at(pos + 1)))
            Pair.second = std::stod(&line.at(pos + 1));
        this->mapc.insert(Pair);
    }
    // read the file where there is number of bitcoin
    std::ifstream infile2;
    infile2.open(fileName2);
    if (infile2.fail())
    {
        std::cout << "error: File doesn't exist or can't be openend ." << std::endl;
        return ;
    }
    // check the first line in file to see if it's syntaxly right. 
    std::getline(infile2, line);
    if (line.compare("date | value")) 
    {
        std::cout << "error: file content is syntaxly wrong .. " << std::endl; return ;
    }
    while (std::getline(infile2, line))
        checkLineValidity(line, mapc);
    infile.close();
    infile2.close();
}

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (0);
    }
    BitcoinExchange Bitcoin;
    Bitcoin.readFile("data.csv", av[1]);
}