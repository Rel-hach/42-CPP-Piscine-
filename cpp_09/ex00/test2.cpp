#include <iostream>
#include <utility>
#include <fstream>


void ftPrint(std::pair<int, std::string> &obj)
{
    std::cout << obj.first << "  " << obj.second << std::endl;
}

int main ()
{
    std::pair<int, std::string> ourPair;

    ourPair.first = 1;
    ourPair.second = "name";

    ftPrint(ourPair);
}

// so pair is a struct template that provides a way to store two hetergeneous objects as a single unit.
// map, multimap, unorder_map, unorder_multimap -> can use it to store data.