// wap to transepose of a matrix and styore in it same matrix
//  squre matrix me hi hoga
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;

    int arr[n][n];
     cout<<"Enter the matrixx :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
  
    // transepose in the sam matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
  
    // print
    cout<<"The transepose of matrix is:"<<endl;
    for (int i = 0; i < n; i++) // column ko phle kr rhe hai print
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}
