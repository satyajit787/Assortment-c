#include <iostream>

using namespace std;

int main (){

    int row,col,num;

    cout<<"Enter Row : ";
    cin>>row;

    cout<<"Enter col : ";
    cin>>col;

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"a"<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
            cin>>array[i][j];
        }
    }
    
    cout<<endl<<"The transpose matrix of an array : "<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<array[j][i]<<" ";
        }

        cout<<endl;
        
    }
    

    return 0;
}