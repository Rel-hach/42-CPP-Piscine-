/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:50:18 by rel-hach          #+#    #+#             */
/*   Updated: 2023/03/20 23:50:20 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& obj);
        ScalarConverter& operator =(const ScalarConverter& obj);
        static void convert(std::string literal);
        static void trimString(std::string& literal);

        static bool checkIfChar(std::string literal);
        static bool checkIfDigit(std::string literal);
        static bool checkIfInt(std::string literal);
        static bool checkIfFloat(std::string literal);
        static bool checkIfDouble(std::string literal);

        static void dispalayCharCase(std::string literal);
        static void dispalayDigitCase(std::string literal);
        static void dispalayIntCase(std::string literal);
        static void dispalayFloatCase(std::string literal);
        static void dispalayDoubleCase(std::string literal);
};

#endif