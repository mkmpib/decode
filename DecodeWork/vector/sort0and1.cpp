// WAP a program to sort 0 and 1

// #include <bits/stdc++.h>
// using namespace std;
// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// // input by function
// void input(vector<int> &v)
// {
//     int n;
//     cout << "Enter the size of vector: ";
//     cin >> n;

//     cout << "Ennter the values of vector: ";
//     for (int i = 0; i < n; i++)
//     {
//         int k;
//         cin >> k;
//         v.push_back(k);
//     }
// }
// void sort0and1(vector<int> &l)
// {
//     cout<<"The sorted vector is: ";
//     int num0 = 0;
//     int num1 = 0;
//     for (int i = 0; i < l.size(); i++)
//     {
//         if (l[i] > 0)
//         {
//             num1++;
//         }
//         else
//         {
//             num0++;
//         }
//     }
//     // filling the elements
//     for (int i = 0; i < l.size(); i++)
//     {
//         if (i < num0)
//         {
//             l[i] = 0;
//         }
//         else
//         {
//             l[i] = 1;
//         }
//     }
// }
// int main()
// {

//     vector<int> v;
//     input(v);
//     sort0and1(v);
//     display(v);

//     return 0;
// }

// SECOND METHOD

#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// input by function
void input(vector<int> &v)
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    cout << "Ennter the values of vector: ";
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
}

void sort0and1(vector<int> &v)
{
    cout << "The sorted vector is: ";
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
            if(left_ptr>right_ptr) break;
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            int temp = v[left_ptr];
            v[left_ptr] = v[right_ptr];
            v[right_ptr] = temp;
        }
        
    }
}
int main()
{

    vector<int> v;
    input(v);
    sort0and1(v);
    display(v);

    return 0;
}
