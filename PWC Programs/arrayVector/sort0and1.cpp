// sort an array that consisting only 0 and 1

// #include <iostream>
// #include <vector>
// using namespace std;

// void sortZeroAndOne(vector<int> &m)
// {

//     int zeroCount = 0;
//     for (int ele : m)
//     {
//         if (ele == 0)
//         {
//             zeroCount++;
//         }
//     }
//     for (int i = 0; i < m.size(); i++)
//     {
//         if (i < zeroCount)
//         {
//             m[i] = 0;
//         }
//         else
//         {
//             m[i] = 1;
//         }
//     }
// }

// int main()
// {

//     int size;
//     cout << "Enter the size: ";
//     cin >> size;

//     vector<int> v(size);// we use here size beacuse we takeing inputing of size

//     for (int i = 0; i < v.size(); i++)
//     {
//         cin >> v[i];
//     }
//     sortZeroAndOne(v);
//     for (int i = 0; i < size; i++)
//     {
//         cout << v[i];
//     }
//     cout << endl;
//     return 0;
// }

// dusra tarika using two pointer method

#include <iostream>
#include <vector>
using namespace std;

void sortZeroAndOne(vector<int> &v)
{

    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {

        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
    }
}

int main()
{

    int size;
    cout << "Enter the size: ";
    cin >> size;

    vector<int> m(size); // we use here size beacuse we takeing inputing of size

    for (int i = 0; i < size; i++)
    {
        cin >> m[i];
    }
    sortZeroAndOne(m);
    for (int i = 0; i < size; i++)
    {
        cout << m[i];
    }
    cout << endl;
    return 0;
}