/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchage.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:53:24 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/12 22:00:54 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>

typedef std::map<std::string, double> map;

class BitcoinExchange
{
    private:
        map mapc;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& obj);
        BitcoinExchange& operator = (const BitcoinExchange& obj);
        void    readFile (std::string fileName);
        bool    checkFormat(std::string s);
        bool    checkDateFormat(std::string date);
        int     daysInMonth(int month, int year);
        bool    checkNumber(std::string number);
        void    checkLineValidity(std::string s, map &mapc);
        bool    dateIsValid(std::string line, std::string date);
        bool    valueIsValid(std::string line, std::string value);
        map::iterator getExchangeRate(std::string date, map &mapc);
        void    printFile(map &mapc);
};

#endif