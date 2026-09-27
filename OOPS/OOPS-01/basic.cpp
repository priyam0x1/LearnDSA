#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float cgpa;
    void getPercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Priyam";
    s1.cgpa = 9.64;
    cout << s1.name << "\n";
    s1.getPercentage();
    return 0;
}