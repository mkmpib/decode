// WAP a program to copy element of first  array   into another array in reverse order


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
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;

    vector<int> v1;
    
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
        v1.push_back(k);
    }
    cout << "Elements of first vector before reverse: ";
    display(v1);

    // int n=v1.size;
    vector<int> v2(v1.size()); // also write here n
    for (int i = 0; i < v2.size(); i++)
    {
        // i+j=size-1  // dono ki index value ka sum vo last vale index ke braber hoga
        int j = v1.size() - 1 - i;
        v2[i] = v1[j]; // i v2 ke liye use ho raha hai value reverse karane ke liye
    }
    cout << "Element of second vector after reverse: ";
    display(v2);

    return 0;
}