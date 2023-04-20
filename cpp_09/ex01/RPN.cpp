/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:32:49 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/16 10:32:51 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string str)
{
    this->string = str;
}

RPN::RPN(const RPN &obj)
{
    if (this != &obj)
        *this = obj;
}

RPN& RPN::operator = (const RPN& obj)
{
    if (this != &obj)
    {
        this->string = obj.string;
        this->stkContainer = obj.stkContainer;
    }
    return (*this);
}

int   RPN::calculating (float first, float second, char op)
{
    if (op == '+')
        return (first + second);
    else if (op == '-')
        return (first - second);
    else if (op == '*')
        return (first * second);
    else if (op == '/')
    {
        if (second == 0)
        throw errorException();
    }
    return (first / second);
}


std::string     RPN::getCharacterType(char c)
{
    if (isdigit(c))
        return ("DIGIT");
    else if (c == '+' || c == '-' || c == '*' || c == '/')
        return ("OPERAND");
    else if (isspace(c))
        return ("SPACE");
    else
        return ("SOMETHING_ELSE");
}

void            RPN::processing( void )
{
    int i = -1;
    int first, second;
    std::string type;
    while (string[++i])
    {
        type = getCharacterType(string[i]);
        if (type == "DIGIT")
            this->stkContainer.push(atoi(string.substr(i, 1).c_str()));
        else if (type == "OPERAND")
        {
            if (this->stkContainer.size() < 2)
                throw errorException();
            second = this->stkContainer.top();
            this->stkContainer.pop();
            first = this->stkContainer.top();
            this->stkContainer.pop();
            this->stkContainer.push(calculating(first, second, string[i]));
        }
        else if (type == "SOMETHING_ELSE")
            throw errorException();
    }
    if (this->stkContainer.size() == 1)
        std::cout << stkContainer.top() << std::endl;
    else
        throw errorException();
}
