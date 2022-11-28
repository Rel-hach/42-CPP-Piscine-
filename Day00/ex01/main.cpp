/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 03:45:32 by rel-hach          #+#    #+#             */
/*   Updated: 2022/11/28 04:57:31 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main ()
{
    std::string cmd;
    PhoneBook   access;

    while (1)
    {
        if (!std::getline(std::cin, cmd) || cmd == "EXIT")
            exit(0);
        if (cmd == "ADD")
            access.add();
        else if (cmd == "SEARCH")
            access.search();
        else
            std::cout << "Invalid Command .." << std::endl;
    }
    return (0);
}

// access.search(&access);