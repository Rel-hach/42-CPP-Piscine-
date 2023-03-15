#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
        Brain *br;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog& rhs);
        Dog& operator =(const Dog& rhs);
        std::string getType() const;
        void makeSound() const;
};

#endif