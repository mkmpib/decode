// WAP to negative in begning and postive at the end

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
    {
          
        if (v[left_ptr] >0 && v[right_ptr] <0) // isko phle use karge to left>right condition ki jarurat nhi h
        {
            int temp = v[left_ptr];
            v[left_ptr] = v[right_ptr];
            v[right_ptr] = temp;
        }
        if (v[left_ptr] < 0) // else use karege to error kabhi nhi ayega
        {
            left_ptr++;
        }
        if (v[right_ptr] >0)
        {
            right_ptr--;
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
