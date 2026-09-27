#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string name;
    string color;
    Car(string name, string color)
    {
        this->name = name;
        this->color = color;
    }
    Car(Car &original)
    {
        cout << "Copying Origional to New......\n";
        name = original.name;
        color = original.color;
    }
};

int main()
{
    Car c1("Maruti 800", "White");
    Car c2(c1);
    cout << c2.name << endl;
    return 0;
}