// #include <iostream>
// using namespace std;
// int main()
// {

//     int n, coulmn;
//     cout << "Enter the value of row and coulmn: ";
//     cin >> n;
//     for (int i = 1; i <= n; i += 2)
//     {
//         for (int j = 1; j <= i; j += 2)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }




#include <iostream>
using namespace std;
int main()
{

    int n, coulmn;
    cout << "Enter the value of row and coulmn: ";
    cin >> n;
    for (int i = 1; i <= n*2-1; i ++)
    {
        for (int j = 1; j <= i; j ++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
