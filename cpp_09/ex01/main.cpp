/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:32:55 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/16 10:32:58 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
        return (0);
    std::string str = av[1];
    RPN calculator(str);
    try
    {
        calculator.processing();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}