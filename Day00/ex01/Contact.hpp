/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 03:45:29 by rel-hach          #+#    #+#             */
/*   Updated: 2022/11/28 03:48:27 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
    private:
    std::string     firstName;
    std::string     lastName;
    std::string     phoneNumber;
    std::string     nickName;
    std::string     darkestSecret;
    public:
    void            setFirstName(std::string firstName);
    void            setLastName(std::string lastName);
    void            setPhoneNumber(std::string phoneNumber);
    void            setNickName(std::string nickName);
    void            setDarkestSecret(std::string darkestSecret);
    std::string     getFirstName();
    std::string     getLastName();
    std::string     getPhoneNumber();
    std::string     getDarkestSecret();
    std::string     getNickName();
};

#endif