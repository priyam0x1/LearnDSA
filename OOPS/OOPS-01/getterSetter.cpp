#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    float cgpa;

public:
    void getPercentage()
    {
        cout << (cgpa * 10) << "%" << endl;
    }

    void setName(string nameVal)
    {
        name = nameVal;
    }

    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }

    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    Student s1;
    s1.setName("Chandrama");
    s1.setCgpa(9.5);
    cout << s1.getName() << endl;
    cout << s1.getCgpa() << endl;
    return 0;
}