#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Draw Circle\n";
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Draw Square\n";
    }
};

int main()
{
    Circle c1;
    Square s1;
    c1.draw();
    s1.draw();
    return 0;
}