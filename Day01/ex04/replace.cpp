/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 00:19:10 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/21 23:33:55 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void    putError(std::string errMsg)
{
    std::cout << errMsg << std::endl;
    exit(EXIT_FAILURE);
}