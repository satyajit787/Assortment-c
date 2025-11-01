#include <iostream>
using namespace std;

int main()
{

    int row, col;

    cout << "Enter Rows : ";
    cin >> row;

    cout << "Enter colums : ";
    cin >> col;

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a" << "[" << i << "]" << "[" << j << "]" << " = ";
            cin >> array[i][j];
        }
    }

    cout << "The largest number is : ";

    int largest = array[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (array[i][j] > largest)
            {
                largest = array[i][j];
            }
        }

    }

    cout << largest;
    return 0;
}