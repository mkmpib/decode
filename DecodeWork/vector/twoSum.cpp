// Find the total number of pairs in the array whose sum is equal to the given value of x

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int>v;
    //int size = sizeof(arr) / sizeof(arr[0]);
    int n;
        cout << "Enter the size of array or vector: ";
    cin >> n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    int sumNum;
    cout << "Enter the number thai you wNT FIND Pair: ";
    cin >> sumNum;
    int count = 0;

    for (int i = 0; i <= v.size(); i++)
    {
        for (int j = i + 1; j <= v.size(); j++)
        {
            if (v[i] + v[j] == sumNum)
            {
                cout << "The index of dublet is: ";
                cout <<"(" <<i << "," << j <<")" << endl;  // if we want to print index
            }
        }
    }
    // cout << "The total number of pair of number " << sumNum << " is: " << count << endl;
    return 0;
}

// Find the total number of pairs in the array whose sum is equal to the given value of x
// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[] = {3, 4, 5, 6, 7, 2};
//     int size = 6;
//     int sumNum;
//     cout << "Enter the number thai you wNT FIND Pair: ";
//     cin >> sumNum;
//     int count = 0;
//     for (int i = 0; i <= size; i++)
//     {
//         for (int j = i + 1; j <= size; j++)
//         {
//             if (arr[i] + arr[j] == sumNum)
//             {
//                 count++; // if we wan to print number
//             }
//         }
//     }
//     cout << "The total number of pair of number " << sumNum << " is: " << count << endl;
//     return 0;
// }