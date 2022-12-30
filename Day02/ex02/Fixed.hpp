/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 05:15:52 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 05:15:56 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <math.h>

class Fixed
{
    private:
        int fixedPointNb;
        static const int fbits = 8;
    public:
        Fixed();
        ~Fixed();
  		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &nb);
		Fixed& 	operator= (Fixed const &fixed);
		bool	operator>	(Fixed &fixed) const;
		bool	operator<	(Fixed &fixed) const;
		bool	operator>=	(Fixed &fixed) const;
		bool	operator<=	(Fixed &fixed) const;
		bool	operator==	(Fixed &fixed) const;
		bool	operator!=	(Fixed &fixed) const;
		Fixed	operator+ (const Fixed &fixed) const;
		Fixed	operator- (const Fixed &fixed) const;
		Fixed	operator* (const Fixed &fixed) const;
		Fixed	operator/ (const Fixed &fixed) const;
		Fixed	operator++ (int);
		Fixed&	operator++ ();
		Fixed	operator-- (int);
		Fixed&	operator-- ();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
        static	Fixed&	min(Fixed& val1, Fixed& val2);
		static	Fixed&	max(Fixed& val1, Fixed& val2);
		static	const Fixed&	min(const Fixed& val1, const Fixed& val2);
		static	const Fixed&	max(const Fixed& val1, const Fixed& val2);
};

#endif