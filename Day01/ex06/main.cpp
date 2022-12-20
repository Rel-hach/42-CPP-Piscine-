/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 03:45:32 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/20 01:30:07 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl Harl;
    if (ac == 2)
    {
        std::string comment = av[1];
        Harl.complain(comment);
    }
    return (0);
}