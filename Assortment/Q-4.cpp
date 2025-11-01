#include <iostream>

using namespace std;

int main()
{

    int row, col;

    cout << "Enter Row : ";
    cin >> row;

    cout << "Enter col : ";
    cin >> col;

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "a" << "[" << i << "]" << "[" << j << "]" << "=";
            cin >> array[i][j];
        }
    }

    int rows;

    cout << "Enter Row number : ";
    cin >> rows;

    for (int i = 0; i < row; i++)
    {
        if (rows < row)
        {

            if (i == rows)
            {
                int sum = 0;
                cout << "Elements of Row " << rows << " : ";
                for (int j = 0; j < col; j++)
                {
                    cout << array[i][j] << ", ";
                    sum = sum + array[i][j];
                }
                cout<<endl << "Sum of " << rows << " row is : " << sum << endl;
            }
        }
        else
        {
            cout << "This row is not exist" << endl;
            break;
        }
    }

    int cols;

    cout << "Enter col number : ";
    cin >> cols;

    for (int i = 0; i < col; i++)
    {
        if (rows<row) {
            if (i == cols){
                int sum = 0;
                cout << "Elements of Col " << cols << " : ";
                for (int j = 0; j < row; j++)
                {
                    cout<< array[j][i] << ", ";
                    sum = sum + array[j][i];
                }
                cout <<endl<< "Sum of " << cols << " col is : " << sum << endl;
            }
        }else
        {
            cout << "This col is not exist" << endl;

            break;
        }
        
    }

    return 0;
}