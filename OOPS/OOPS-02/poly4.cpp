#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Parent class show....\n";
    }

    virtual void hello()
    {
        cout << "Virtual Hello\n";
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "Child class show....\n";
    }
    void hello()
    {
        cout << "Child Hello\n";
    }
};

int main()
{
    Child child1;
    Parent *ptr;
    ptr = &child1;
    ptr->hello();

    return 0;
}