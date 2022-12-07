/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 03:45:36 by rel-hach          #+#    #+#             */
/*   Updated: 2022/11/28 06:02:14 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    _index = 0;
    _size = 0;
    std::cout << "* PLEASE, USE THE KEYWORDS BELLOW" << std::endl;
    std::cout << "- ADD  : To add a new Contact" << std::endl;
    std::cout << "- SEARCH  : To look for a saved Contact" << std::endl;
    std::cout << "- EXIT  : To exit the Program" << std::endl;
}

int str_isnum(std::string str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

std::string read_line(std::string enter)
{
    std::string name;
    while (1)
    {
        std::cout << enter << std::endl;
        if (!std::getline(std::cin, name))
            exit(1);
        if (!name.empty() && name[0] != ' ' && name[0] != '\t' && enter[0] != 'P')
            break ;
        if (!name.empty() && str_isnum(name) && name[0] != ' ' && name[0] != '\t' && enter[0] == 'P')
            break ;
    }
    int end = name.find_last_not_of(" \t\v");
    name = name.substr(0, end + 1);
    return (name);
}


void    PhoneBook::add()
{
    _contact[_index].setFirstName(read_line("FIRST NAME :"));
    _contact[_index].setLastName(read_line("LAST NAME :"));
    _contact[_index].setPhoneNumber(read_line("PHONE NUMBER :"));
    _contact[_index].setDarkestSecret(read_line("NICK NAME :"));
    _contact[_index].setNickName(read_line("DARKEST SECRET :"));
    _index++;
    if(_index == 8)
        _index = 0;
    if (_size < 8)
        _size++;
}

int parse_index(std::string index)
{
    if (index.size() != 1 || index[0] == '0')
        return (100);
    if (!isdigit(index[0]))
        return(100);
    else
        return (index[0] - '0');
}

void    PhoneBook::search()
{
    int         i = 0;
    if (_size == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return ;
    }
    std::cout << "*----------*----------*----------*----------*" << std::endl;
    std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
    std::cout << "*----------*----------*----------*----------*" << std::endl;
    while (i < _size)
    {
        std::cout << "|" << std::setw(10) << i + 1;
        std::string fname = _contact[i].getFirstName();
        if (fname.size() > 10)
            fname = fname.substr(0, 9) + '.';
        std::cout << "|" << std::setw(10) << fname;
        std::string lname = _contact[i].getLastName();
        if (lname.size() > 10)
            lname = lname.substr(0, 9) + '.';
        std::cout << "|" << std::setw(10) << lname;
        std::string Nickname = _contact[i].getNickName();
        if (Nickname.size() > 10)
            Nickname = Nickname.substr(0, 9) + '.';
        std::cout << "|" << std::setw(10) << Nickname << "|";
        std::cout << std::endl;
        i++;
    }
    std::cout << "*----------*----------*----------*----------*" << std::endl;
    std::string input;
    std::getline(std::cin, input);
    int j = parse_index(input);
    if (j <= _size)
    {    
        std::cout << "FIRST NAME : " << _contact[j - 1].getFirstName() << std::endl;
        std::cout << "LAST NAME : " << _contact[j - 1].getLastName() << std::endl;
        std::cout << "PHONE NUMBER :" << _contact[j - 1].getPhoneNumber() << std::endl;
        std::cout << "NICK NAME : " << _contact[j - 1].getNickName() << std::endl;
        std::cout << "DARKEST SECRET : " << _contact[j - 1].getDarkestSecret() << std::endl;
    }
    else
        std::cout << "Invalid entry .. " << std::endl;
}