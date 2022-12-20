/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:43 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/19 02:48:49 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack();
};

#endif