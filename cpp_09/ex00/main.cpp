/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:54:15 by rel-hach          #+#    #+#             */
/*   Updated: 2023/04/07 01:59:10 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchage.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: invalid number of arguments ." << std::endl;
        return (0);
    }
    BitcoinExchange Bitcoin;
    Bitcoin.readFile(av[1]);
}
