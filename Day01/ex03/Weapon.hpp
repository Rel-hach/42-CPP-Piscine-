/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:53 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/07 19:12:46 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

using std::string;
using std::cout;

class Weapon
{
    private:
    string _type;
    public:
    Weapon(std::string name);
    ~Weapon();
    std::string getType() const;
    void        setType(std::string type);
};