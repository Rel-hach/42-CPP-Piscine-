#include <iostream>

class A
{
    public:
        A() { std::cout << "A __CONSTRUCTOR" << std::endl; }
        virtual ~A() { std::cout << "A __DESTRUCTOR" << std::endl; }
};

class C
{
        int arr[100];
    public:
        C() { std::cout << "C __CONSTRUCTOR" << std::endl; }
        virtual ~C() { std::cout << "C __DESTRUCTOR" << std::endl; }
};

class B : public A
{
        C *ptr;
    public:
        B() { 
            std::cout << "B __CONSTRUCTOR" << std::endl; 
            this->ptr = new C();
            }
        virtual ~B() 
            {
            delete this->ptr;
            std::cout << "B __DESTRUCTOR" << std::endl; 
            }
};

int main()
{
    A *obj = new B();
    delete obj;
}