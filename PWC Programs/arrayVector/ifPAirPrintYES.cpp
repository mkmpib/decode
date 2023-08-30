// #include <iostream>
// using namespace std;
// int main()
// {

//         int arr[] = {-1,0,1,2,3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int sumNum;
//     cout << "Enter the number thai you wNT FIND Pair: ";
//     cin >> sumNum;
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {

//                 if (arr[i] + arr[j] == sumNum)
//                 {
//                     count++;
//                 }

//         }
//     }
//    if (count>0){
//     cout<<"YES"<<endl;
//    }else{
//         cout<<"NO"<<endl;

//    }
//     return 0;
// }
#include <iostream>
using namespace std;
void yesNo(int arr[], int n)
{

    int sumNum;
    cout << "Enter the number that you want FIND Pair: ";
    cin >> sumNum;
    bool found = false;
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == sumNum)
        {
            found = true;
            break;
        }
        else if (arr[i] + arr[j] < sumNum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    if (found == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int array[size];

    cout << "Enter the array in incresing order: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    yesNo(array, size);

    return 0;
}
// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr[] = {-1, 0, 1, 2, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int sumNum;
//     cout << "Enter the number that you want FIND Pair: ";
//     cin >> sumNum;
//     bool found = false;
//     int i = 0, j = i+1;
//     while (i < j)
//     {

//         if (arr[i] + arr[j] == sumNum)
//         {
//             found = true;
//             break;
//         }

//         else
//         {
//             i++;
//                 j++;
//         }
//     }
//     if (found == true)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
