/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:32:43 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/16 10:32:46 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <string>
#include <exception>

class RPN
{
    private:
        std::stack<int> stkContainer;
        std::string string;
    public:
        RPN();
        RPN(std::string str);
        RPN(RPN &obj);
        RPN& operator = (const RPN& obj);
        void            processing( void );
        std::string     getCharacterType(char c);
        int            calculating (float first, float second, char op);

        class errorException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Error");
                }
        };
};