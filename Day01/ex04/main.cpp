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
        int ret;
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
            ret = line.find(s1);
            while (ret != -1)
            {
                line.erase(ret, s1.size());
                line.insert(ret, s2);
                ret = line.find(s1);
            }
            o << line;
            if (!file.eof())
                o << std::endl;
        }
        file.close();
    }
    return (0);
}
