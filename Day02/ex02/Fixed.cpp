/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 05:14:47 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/27 05:51:39 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedPointNb = 0;
}

Fixed::Fixed(int const nb)
{
	this->fixedPointNb = roundf(nb * (1 << this->fbits));
}

Fixed::Fixed(float const nb)
{
	this->fixedPointNb = roundf(nb * (1 <<this->fbits));
}

Fixed::~Fixed()
{}

Fixed::Fixed(Fixed const &nb) : fixedPointNb(nb.fixedPointNb)
{}

Fixed& 	Fixed::operator= (Fixed const &fixed)
{
	this->fixedPointNb = fixed.fixedPointNb;
	return (*this);
}

std::ostream& operator<< (std::ostream &out, Fixed const& fixed)
{
	return out << fixed.toFloat();	
}

int		Fixed::getRawBits(void) const
{
	return this->fixedPointNb;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointNb = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixedPointNb / (float)(1 << this->fbits));
}

int		Fixed::toInt(void) const
{
	return (this->fixedPointNb / (int)(1 << this->fbits));
}

/* ~> https://en.cppreference.com/w/cpp/language/operator_arithmetic <~ */

Fixed	Fixed::operator+ (const Fixed &fixed) const
{
	Fixed	fix;
	fix.fixedPointNb = fixedPointNb + fixed.fixedPointNb;
	return fix;
}

Fixed	Fixed::operator- (const Fixed &fixed) const
{
	Fixed	fix;
	fix.fixedPointNb = fixedPointNb - fixed.fixedPointNb;
	return fix;
}

// fixed point Numbers MULTIPLICATION 

Fixed	Fixed::operator* (const Fixed &fixed) const
{
	Fixed	fix;
	fix.fixedPointNb = (fixedPointNb * fixed.fixedPointNb) / (1 << fbits);
	return fix;
}

Fixed	Fixed::operator/ (const Fixed &fixed) const
{
	Fixed	fix;
	fix.fixedPointNb = (fixedPointNb / fixed.fixedPointNb) * (1 << fbits);
	return fix;
}

/* https://en.cppreference.com/w/cpp/language/operator_comparison OVERLOAD INSIDE CLASS */

bool	Fixed::operator> (Fixed &fixed) const
{
	if (fixedPointNb > fixed.fixedPointNb)
		return (true);
	return (false);
}

bool	Fixed::operator< (Fixed &fixed) const
{
	if (fixedPointNb < fixed.fixedPointNb)
		return (true);
	return (false);
}

bool	Fixed::operator>= (Fixed &fixed) const
{
	if (fixedPointNb >= fixed.fixedPointNb)
		return (true);
	return (false);
}

bool	Fixed::operator<=	(Fixed &fixed) const
{
	if (fixedPointNb <= fixed.fixedPointNb)
		return (true);
	return (false);
}

bool	Fixed::operator== (Fixed &fixed) const
{
	if (fixedPointNb == fixed.fixedPointNb)
		return (true);
	return (false);
}

bool	Fixed::operator!= (Fixed &fixed) const
{
	if (fixedPointNb != fixed.fixedPointNb)
		return (true);
	return (false);
}

/* cpp reference increment operators ->> https://en.cppreference.com/w/cpp/language/operator_incdec */

/*pre-increment*/
Fixed&	Fixed::operator++ ()
{
	++this->fixedPointNb;
	return *this;
}

Fixed	Fixed::operator++ (int)
{
	Fixed	tmp;

	tmp.fixedPointNb = this->fixedPointNb;
	this->fixedPointNb++;
	return tmp;
}

Fixed&	Fixed::operator-- ()
{
	--this->fixedPointNb;
	return *this;
}

Fixed	Fixed::operator-- (int)
{
	Fixed	tmp;

	tmp.fixedPointNb = this->fixedPointNb;
	this->fixedPointNb--;
	return tmp;
}

Fixed&	Fixed::min(Fixed& val1, Fixed& val2)
{
    if (val1.getRawBits() > val2.getRawBits())
        return (val2);
    return (val1);
}
Fixed&	Fixed::max(Fixed& val1, Fixed& val2)
{
    if (val1.getRawBits() < val2.getRawBits())
        return (val2);
    return (val1);
}

const Fixed&	Fixed::min(const Fixed& val1, const Fixed& val2)
{
    if (val1.getRawBits() > val2.getRawBits())
        return (val2);
    return (val1);
}

const Fixed&	Fixed::max(const Fixed& val1, const Fixed& val2)
{
    if (val1.getRawBits() < val2.getRawBits())
        return (val2);
    return (val1);
}