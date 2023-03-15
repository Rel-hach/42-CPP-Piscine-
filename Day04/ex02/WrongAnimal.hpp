#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& rhs);
        WrongAnimal& operator =(const WrongAnimal& rhs);
        void makeSound() const;
        std::string getType() const;

};

#endif