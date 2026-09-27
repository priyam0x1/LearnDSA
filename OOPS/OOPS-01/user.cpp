#include <iostream>
#include <string>
using namespace std;

class User
{
    int id;
    string password;

public:
    User(int id)
    {
        cout << "Constructor with parameter\n";
        this->id = id;
    }
    string username;
    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassword()
    {
        return password;
    }
};

int main()
{
    User user1(101);
    user1.username = "Chandrama";
    user1.setPassword("chandrama@1234");
    cout << user1.username << endl;
    cout << user1.getPassword() << endl;
    return 0;
}