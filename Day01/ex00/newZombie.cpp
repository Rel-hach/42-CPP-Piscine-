/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:59:56 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 23:27:21 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  * obj = new (std::nothrow)Zombie(name);
    if (!obj)
    {
        std::cout << "Allocation Failed .. " << std::endl;
        exit (EXIT_FAILURE);
    }
    return (obj);
}