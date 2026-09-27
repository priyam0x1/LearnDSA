#include <iostream>
#include <string>
using namespace std;

class Car
{
    string name;
    string color;

public:
    Car(string nameVal, string colorVal)
    {
        cout << "Constructor iss Called\n";
        name = nameVal;
        color = colorVal;
    }
    void start()
    {
        cout << "Car has Started\n";
    }
    void stop()
    {
        cout << "Car has Stopped\n";
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Car c1("Maruti 800", "White");
    cout << c1.getName() << endl;
    return 0;
}