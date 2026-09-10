#include <iostream>
using namespace std;

int main()
{
    int students[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                cout << "Enter The height : ";
            }
            else
            {
                cout << "Enter The Weights : ";
            }
            cin >> students[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Student " << i + 1 << " Heights & Weights : ";
        for (int j = 0; j < 2; j++)
        {
            cout << students[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}