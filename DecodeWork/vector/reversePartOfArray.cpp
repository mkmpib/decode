// WAP a program to reverse an array without using another array

#include <bits/stdc++.h>
// #include <vector>
using namespace std;
void display(vector<int> &v) // we can also write here a and anther variable name
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void reversePart(vector<int> &l) // we can also write here a and anther variable name
{
      int i,j;
    cout<<"Enter the index where you want to start revesing: ";
    cin>>i;
        cout<<"Enter the index where you want to stop revesing: ";
cin>>j;
    for ( i, j; i <= j; i++, j--)
    {
        int temp = l[i];
        l[i] = l[j];
        l[j] = temp;
    }
}
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> v;

    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
    // v1.push_back(5);
    // v1.push_back(7);
    // v1.push_back(4);

    cout << "Ennter the values of vector: ";
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    cout << "Elements of vector before reverse: ";
    display(v);

    // swaping
    // int i = 0;
    // int j = v.size() - 1; // means last index

    //  while (i <= j)  // for loop bhi use kr skte h or dono i and j ko bhio intilize krskte h
    //  {
    //      int temp = v[i];
    //      v[i] = v[j];
    //      v[j] = temp;
    //      i++;  // next step or i ki value increse karne ke liye
    //      j--;
    //  }

    // using for loop
//     int i,j;
//     cout<<"Enter the value where you want to start revesing: ";
//     cin>>i;
//         cout<<"Enter the value where you want to stop revesing: ";
// cin>>j;
//     for ( i, j; i <= j; i++, j--)
//     {
//         int temp = v[i];
//         v[i] = v[j];
//         v[j] = temp;
//     }
    reversePart(v);
    cout << "Element of  vector after reverse: ";

    display(v);

    return 0;
}