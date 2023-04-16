#include <iostream>
#include <utility>
#include <map>


int main ()
{
    std::map<int, std::string> test;
    for (int i = 10; i >= 0; i--) {
        std::pair<int, std::string> cup;
        cup.first = i;
        cup.second = "h" + std::to_string(i);
        test.insert(cup);
    }
    std::pair<int, std::string> cup;
    cup.first = 5;
    cup.second = "66";
    test.insert(cup);
    cup.first = 6;
    cup.second = "55";
    test.insert(cup);
    std::map<int, std::string>::iterator it = test.begin();
    for ( ; it != test.end(); ++it) {
        std::cout << "-->  " << it->first << "  " << it->second << std::endl;
    }
}