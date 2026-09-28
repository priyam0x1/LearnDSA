#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    string color;
    void eat()
    {
        cout << "Eats\n";
    }
    void breathe()
    {
        cout << "Breathes\n";
    }
};

class Fish : protected Animal
{
public:
    int fins;
    void swim()
    {
        eat();
        cout << "Swims\n";
    }
};

int main()
{
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << "\n";
    f1.swim();
    return 0;
}