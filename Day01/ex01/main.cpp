/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 23:25:40 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 02:35:30 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *zombie = zombieHorde( 10, "Zombie" );
    int i = 0;
    while (i < 10)
    {
        zombie[i].announce();
        i++;
    }
    delete [] zombie;
    return 0;
}