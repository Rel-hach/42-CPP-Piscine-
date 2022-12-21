/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:25:50 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 23:28:00 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    ft_error_message(std::string str)
{
    std::cout << "Error : " << str << std::endl;
    exit (EXIT_FAILURE);
}

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 1)
        ft_error_message("A horde Must contains at least 1 zombie");
    Zombie *zombie = new (std::nothrow)Zombie[N];
    if (!zombie)
        ft_error_message("Allocation failed");
    for (int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
    }
    return (zombie);
}