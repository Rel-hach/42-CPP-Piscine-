/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:50:30 by rel-hach          #+#    #+#             */
/*   Updated: 2023/03/20 23:50:32 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
    Notes:
        - typecasting is used to convert the data type of a variable to another data type.
        - 
*/

int main (int ac, char **av)
{
    if (ac != 2)
        return (0);
    std::string literal = av[1];
    ScalarConverter::trimString(literal);
    if (literal.empty())
        return (0);
    ScalarConverter::convert(literal);
}