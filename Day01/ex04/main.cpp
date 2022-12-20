/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:12:49 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/20 00:00:36 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// ifstream 'stream' to read from files
// ofstream 'stream' to write on files

int checkRest(std::string line, std::string s1)
{
    int i = 0;
    while (line[i] && s1[i])
    {
        if (line[i] != s1[i])
            return (0);
        i++;
    }
    return (1);
}

int main (int ac, char **av)
{
    if (ac == 4)
    {
        std::string file_name = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string line;
        std::ifstream file;
        std::string outfile;
        file.open(file_name);
        if (file.fail())
            std::cout << "error" << std::endl;
        outfile = file_name + ".replace";
        std::ofstream o;
        o.open(outfile);
        if (o.fail())
            std::cout << "error" << std::endl;
        while (std::getline(file, line))
        {
            int i = 0;
            while (line[i])
            {
                if (line[i] == s1[0])
                {
                    if (checkRest(&line[i], s1))
                    {
                        o << s2;
                        i = i + s1.size();
                    }
                }
               o << line[i];
                i++;
            }
            if (!file.eof())
                o << std::endl;
        }
    }
}
