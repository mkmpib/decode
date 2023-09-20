#include <iostream>
using namespace std;
int main()
{

    int row, coulmn;
    cout << "Enter the number of row and coulmn: ";
    cin >> row >> coulmn;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coulmn; j++)
        {
            cout << "*";//for printing a number
            //cout << j;// for printing a number
        }
        cout << endl;
    }
}