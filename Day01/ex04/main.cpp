/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <rel-hach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:12:49 by rel-hach          #+#    #+#             */
/*   Updated: 2022/12/22 00:00:32 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main (int ac, char **av)
{
    if (ac == 4)
    {
        std::string infile_name = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string line;
        std::ifstream inputStream;
        std::string outfile;
        int ret;
        int i = 0;
        inputStream.open(infile_name);
        if (inputStream.fail())
            putError("input file couldn't be opened");
        outfile = infile_name + ".replace";
        std::ofstream outputStream;
        outputStream.open(outfile);
        if (outputStream.fail())
            putError("input file couldn't be opened");
        while (std::getline(inputStream, line))
        {
            ret = line.find(s1);
            while (ret != -1 && line[i] != '\0')
            {
                line.erase(ret, s1.size());
                line.insert(ret, s2);
                ret = line.find(s1);
                i = i + s1.size();
            }
            outputStream << line;
            if (!inputStream.eof())
                outputStream << std::endl;
        }
        inputStream.close();
        outputStream.close();
    }
    return (0);
}
