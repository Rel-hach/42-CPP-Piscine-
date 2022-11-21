/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:18:35 by rel-hach          #+#    #+#             */
/*   Updated: 2022/11/19 01:35:49 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
    char    c;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            for (int j = 0; j < (int)str.size(); j++)
            {
                c = std::toupper(str[j]);
                std::cout << c;
            }
            if (i != ac - 1)
                std::cout << " ";
        }
    }
    std::cout << std::endl;
}