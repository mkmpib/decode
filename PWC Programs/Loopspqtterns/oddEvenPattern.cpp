#include <iostream>
using namespace std;
int main()
{

    int row, coulmn;
    cin >> row;
    cin >> coulmn;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coulmn; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
        }
        cout << endl;
    }
    return 0;
}