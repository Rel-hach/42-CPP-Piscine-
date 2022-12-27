/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 05:55:54 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 05:41:52 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int fixedPointNb;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floatNb);
        Fixed(const Fixed &cp);
        ~Fixed();
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed& operator=(const Fixed &cp);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

std::ostream &operator <<(std::ostream &out, Fixed & os);

#endif