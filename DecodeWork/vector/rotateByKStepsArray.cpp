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
void reversePart(int i,int j,vector<int> &l) // we can also write here a and anther variable name
{
 
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

    

    cout << "Ennter the values of vector: ";
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    cout << "Elements of vector before reverse: ";
    display(v);

int k=2; // steps for rptate
    reversePart(0,n-k-1,v);  // n-k-i ka mtlv hai array ke size-kstepsko-1(kyoko indexing 0 se styart hoti hai)
    reversePart(n-k,n-1,v); // ager n likha to n ki value vo 6 hai or werror kyoki arr uskli indexing 0 se start hoker n-1 tak clegi
    reversePart(0,n-1,v);
    cout << "Element of  vector after reverse: ";

    display(v);

    return 0;
}