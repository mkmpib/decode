// print spiral matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cout << "Enter the row number: ";
    cin >> row;
    int coulmn;
    cout << "Enter the coulmn number: ";
    cin >> coulmn;

    int matrix[row][coulmn];
    cout << "Enter the element of array: " << endl;
    for (int i = 0; i < row; i++) // i for row
    {
        for (int j = 0; j < coulmn; j++) // j foer coulmn
        {
            cin >> matrix[i][j];
        }
    }
    // sprial code
    int minRow = 0, minCoulmn = 0;
    int maxRow = row - 1, maxCoulmn = coulmn - 1;

    while (minRow <= maxRow && minCoulmn <= maxCoulmn)
    {
        // left--> right

        for (int col = minCoulmn; col <= maxCoulmn; col++)
        {
            cout << matrix[minRow][col] << " ";
        }
        minRow++;
        if (minRow > maxRow || minCoulmn > maxCoulmn)
            break;
        // top--> bottom

        for (int row = minRow; row <= maxRow; row++)
        {
            cout << matrix[row][maxCoulmn] << " ";
        }
        maxCoulmn--;
        if (minRow > maxRow || minCoulmn > maxCoulmn)
            break;
        // right--left

        for (int col = maxCoulmn; col >= minCoulmn; col--)
        {
            cout << matrix[maxRow][col] << " ";
        }
        maxRow--;
        if (minRow > maxRow || minCoulmn > maxCoulmn)
            break;
        // bottom-->top

        for (int row = maxRow; row >= minRow; row--)
        {
            cout << matrix[row][minCoulmn] << " ";
        }
        minCoulmn++;
    }

    return 0;
}