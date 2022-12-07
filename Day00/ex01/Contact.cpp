/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 03:45:24 by rel-hach          #+#    #+#             */
/*   Updated: 2022/11/28 03:46:09 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

    // -> SETTERS FUNCTIONS :

    void    Contact::setFirstName(std::string firstName)
    {
        this->firstName = firstName;
    }
    
    void    Contact::setLastName(std::string lastName)
    {
        this->lastName = lastName;
    }
    
    void    Contact::setPhoneNumber(std::string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
    
    void    Contact::setDarkestSecret(std::string darkestSecret)
    {
        this->darkestSecret = darkestSecret;
    }

    void    Contact::setNickName(std::string nickName)
    {
        this->nickName = nickName;
    }
    
    // -> GETTERS FUNCTIONS :
    
    std::string    Contact::getFirstName()
    {
        return (this->firstName);
    }
    
    std::string    Contact::getLastName()
    {
        return (this->lastName);
    }
    
    std::string    Contact::getPhoneNumber()
    {
        return (this->phoneNumber);
    }
    
    std::string    Contact::getDarkestSecret()
    {
        return (this->darkestSecret);
    }

    std::string    Contact::getNickName()
    {
        return (this->nickName);
    }