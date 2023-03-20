/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:50:23 by rel-hach          #+#    #+#             */
/*   Updated: 2023/03/20 23:50:25 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter: Default Constructor is called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& obj)
{
    std::cout << "ScalarConverter: Copy Constructor is called" << std::endl;
}

ScalarConverter& ScalarConverter::operator =(const ScalarConverter& obj)
{
    std::cout << "ScalarConverter: Assignment operator is called " << std::endl;
    return (*this);
}

/* --------------------------Convert------------------------------- */


void ScalarConverter::convert(std::string literal)
{
    std::cout << "ScalarConverter: convert function is called" << std::endl;
    if (checkIfChar(literal))
        dispalayCharCase(literal);
    else if (checkIfDigit(literal))
        dispalayDigitCase(literal);
    else if (checkIfInt(literal))
        dispalayIntCase(literal);
    else if (checkIfFloat(literal))
        dispalayFloatCase(literal);
    else if (checkIfDouble(literal))
        dispalayDoubleCase(literal);
    else
        std::cout << "ScalarConverter: Input is not valid." << std::endl;
}

/* --------------------------TRIM------------------------------- */

void ScalarConverter::trimString(std::string& literal)
{
    int i = 0;
    while (literal[i] == ' ' || literal[i] == '\t')
        i++;
    if (i > 0)
        literal.erase(0, i);
    i = literal.size() - 1;
    while (literal[i] == ' ' || literal[i] == '\t')
        i--;
    if (i < literal.size() - 1)
        literal.erase(i + 1, literal.size() - 1);
}


/* -------------------------CHECK------------------------------- */


bool ScalarConverter::checkIfChar(std::string literal)
{
    if (literal.size() == 1)
    {
        if (isdigit(literal[0]))
            return false;
        else
            return true;
    }
    return false;
}

bool ScalarConverter::checkIfDigit(std::string literal)
{
    if (literal.size() == 1)
    {
        if (isdigit(literal[0]))
            return true;
        else
            return false;
    }
    return false;
}

bool ScalarConverter::checkIfInt(std::string literal)
{
    int i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    while (isdigit(literal[i]) != '\0')
        i++;
    if (literal[i] == '\0')
        return true;
    return false;
}

bool ScalarConverter::checkIfFloat(std::string literal)
{
    int i = 0;
    if (literal.compare("inff") || literal.compare("nanf") ||
        literal.compare("-inff") || literal.compare("+inff"))
        return true;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    while (isdigit(literal[i]) != '\0')
        i++;
    if (literal[i] == '.' && isdigit(literal[i + 1]))
    {
        i++;
        while (isdigit(literal[i]) != '\0')
            i++;
        if (literal[i] == 'f' && literal[i + 1] == '\0')
            return true;
    }
    return false;
}

bool ScalarConverter::checkIfDouble(std::string literal)
{
    int i = 0;
    if (literal.compare("inf") || literal.compare("nan") ||
        literal.compare("-inf") || literal.compare("+inf"))
        return true;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    while (isdigit(literal[i]) != '\0')
        i++;
    if (literal[i] == '.' && isdigit(literal[i + 1]))
    {
        i++;
        while (isdigit(literal[i]) != '\0')
            i++;
        if (literal[i] == '\0')
            return true;
    }
    return false;
}

/* -------------------------PRINT------------------------------- */

void ScalarConverter::dispalayCharCase(std::string literal)
{
    char c = literal[0];
    if (isprint(c))
        std::cout << "ScalarConverter: char: " << c << std::endl;
    else
        std::cout << "ScalarConverter: char: Non displayable" << std::endl;
    std::cout << "ScalarConverter: int: " << static_cast<int>(c) << std::endl;
    std::cout << "ScalarConverter: float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "ScalarConverter: double: " << static_cast<double>(c) << ".0" << std::endl;
}

void ScalarConverter::dispalayDigitCase(std::string literal)
{
    int digit = literal[0] - '0';
    if (isprint(digit))
        std::cout << "ScalarConverter: char: " << static_cast<char>(digit) << std::endl;
    else
        std::cout << "ScalarConverter: char: Non displayable" << std::endl;
    std::cout << "ScalarConverter: int: " << static_cast<int>(digit) << std::endl;
    std::cout << "ScalarConverter: float: " << static_cast<float>(digit) << ".0f" << std::endl;
    std::cout << "ScalarConverter: double: " << static_cast<double>(digit) << ".0" << std::endl;

}

void ScalarConverter::dispalayIntCase(std::string literal)
{
    int number = std::stoi(literal);
    if (isprint(number))
        std::cout << "ScalarConverter: char: " << static_cast<char>(number) << std::endl;
    else
        std::cout << "ScalarConverter: char: Non displayable" << std::endl;
    std::cout << "ScalarConverter: int: " << static_cast<int>(number) << std::endl;
    std::cout << "ScalarConverter: float: " << static_cast<float>(number) << ".0f" << std::endl;
    std::cout << "ScalarConverter: double: " << static_cast<double>(number) << ".0" << std::endl;
}

void ScalarConverter::dispalayFloatCase(std::string literal)
{
    float number = std::stof(literal);
    if (isprint(number))
        std::cout << "ScalarConverter: char: " << static_cast<char>(number) << std::endl;
    else
        std::cout << "ScalarConverter: char: Non displayable" << std::endl;
    std::cout << "ScalarConverter: int: " << static_cast<int>(std::stof(literal)) << std::endl;
    std::cout << "ScalarConverter: float: " << static_cast<float>(std::stof(literal)) << "f" << std::endl;
    std::cout << "ScalarConverter: double: " << static_cast<double>(std::stof(literal)) << std::endl;
}

void ScalarConverter::dispalayDoubleCase(std::string literal)
{
    double number = std::stod(literal);
    if (isprint(number))
        std::cout << "ScalarConverter: char: " << static_cast<char>(number) << std::endl;
    else
        std::cout << "ScalarConverter: char: Non displayable" << std::endl;
    std::cout << "ScalarConverter: int: " << static_cast<int>(number) << std::endl;
    std::cout << "ScalarConverter: float: " << static_cast<float>(number) << "f" << std::endl;
    std::cout << "ScalarConverter: double: " << static_cast<double>(number) << std::endl;
}