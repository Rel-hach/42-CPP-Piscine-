#include "iostream"
#include <exception>


class Conversion
{
    std::string var;
    public:
        Conversion() {}
        Conversion(std::string str)
        {
            var = str;
        }
        std::string checkType()
        {
            if (this->var.size() == 1)
                return (isdigit(this->var[0]) ? "INT" : "CHAR");
            if (this->var == "NAN")
        }

};

std::string checkEntry (std::string str)
{
    int i = 0;
    int j = str.size() - 1;
    while (str[i] == ' ') i++;
    while (str[j] == ' ') j--;
    str = str.substr(i, (j + 1) - i);
    if (str.empty())
        throw "INVALID ENTRY";
    return (str);
}

int main (int ac, char **av)
{
    if (ac == 2)
    {
        std::string str(av[1]);
        try{
            str = checkEntry (str);
            Conversion obj(str);
        }
        catch(const char *err)
        {
            std::cout << err << std::endl;
        }
    }
    return 0;
}