// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the size of aray: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // sortung
//     for (int i = 0; i < n - 1; i++) // because i size lamke liye calama hai
//     {
//         // triversing
//        // for (int j = 0; j < n - 1; j++)
//          for (int j = 0; j < n - 1-i; j++) // more efficent hai kyoki isme km baar itersion ho ri hai 
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     cout << "The sorted array is :";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// optimize bubble sort

#include <bits/stdc++.h> // t.c o(n)
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of aray: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sortung
    for (int i = 0; i < n - 1; i++) // because i size lamke liye calama hai
    {
        
        bool flage=true;
         for (int j = 0; j < n - 1-i; j++) // more efficent hai kyoki isme km baar itersion ho ri hai 
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flage=false;
            }
        }
        if(flage==true)//swaping dinot happinging
        {
            break;
        }
    }
    cout << "The sorted array is :";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

