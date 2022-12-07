/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:59:59 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/07 17:33:09 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
//int Zombie::x=0;

int main(void)
{
    Zombie  obj("zooombiii");
    obj.announce();
    Zombie *obj2 = newZombie("foo");
    obj2->announce();
    randomChump("Zname");
    Zombie zombie("lolo");
    zombie.announce();
    a->announce();
}