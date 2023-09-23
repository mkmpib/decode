// *
// * *
// * * *
// * * * *

// #include <iostream>
// using namespace std;
// int main()
// {

//     int row, coulmn;
//     cout << "Enter the value of row and coulmn: ";
//     cin >> row;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
int main()
{

    int row, coulmn;
    cout << "Enter the value of row and coulmn: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j <= row; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}


// ye number me sahi output deta hai

// #include<stdio.h>
// int main (){
//    int n;
//    printf("Enter the row number:");
//    scanf("%d",&n);
//    for(int i = n; i>=1; i--){
//       for(int j=1; j<=i; j++){
//          printf("*" );
        
//       }
//       printf("\n");
//    }
// }