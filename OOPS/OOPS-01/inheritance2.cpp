#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "eats\n";
    }
    void breathe()
    {
        cout << "breathes\n";
    }
};

class Mamal : public Animal
{
public:
    string bloodType;
    Mamal()
    {
        bloodType = "warm";
    }
};

class Dog : public Mamal
{
public:
    void tailWag()
    {
        cout << "Dog wag their tails\n";
    }
};

int main()
{
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailWag();
    cout << d1.bloodType << endl;
    return 0;
}