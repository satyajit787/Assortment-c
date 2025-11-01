#include <iostream>

using namespace std;

int main()
{
    int col, counter=false;

    cout << "Enter Coulams : ";
    cin >> col;

    int array[col];

    for (int i = 0; i < col; i++)
    {
        cout << "a" << "[" << i << "]" << " = ";
        cin >> array[i];
    }

    for (int i = 0; i < col; i++)
    {
        if (array[i] < 0)
        {
            cout << array[i];
           counter= true;
        }
        
    }

    if (!counter)
    {
        cout << " Not a nagetiv number ";
    }
    

        }