/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:40 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 03:28:11 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    _name = name;
} 

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack()
{
    if (_weapon)
        std::cout << _name << "  attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << "  attacks with their 'hands' " << std::endl;
}