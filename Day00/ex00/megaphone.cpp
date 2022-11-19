/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 20:18:35 by rel-hach          #+#    #+#             */
/*   Updated: 2022/11/19 01:17:49 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 0;
    char    c;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (av[++i])
    {
        int j = -1;
        while (av[i][++j])
        {
            c = toupper(av[i][j]);
            std::cout << c;
        }
        if (av[i + 1])
            std::cout << " ";
    }
    std::cout << std::endl;
}