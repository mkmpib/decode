// WAP to merge two soeted array in one another array

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
    int size;

    cin >> size;

    cout << "Ennter the values of vector: ";
    for (int i = 0; i < size; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
}

vector<int> merge(vector<int> &m1, vector<int> &m2)
{
    cout << "The merge vector is: ";
    int n = m1.size(); // 1st vector ka size 
    int m = m2.size();// 2nd
    vector<int> result(m + n);  // 3rd
    int i = 0;                       // m1 mtlv first vector
    int j = 0;                       // m2 mtlv second vector
    int k = 0;                       // result vector  mtlv third jisme dono ki value store hini hai
    while (i <= n - 1 && j <= m - 1) // jb size ke equl ho jaye or index out off bond na ho
    {
        if (m1[i] < m2[j])
        {
            result[k] = m1[i];
            i++;
            // k++;
        }
        else // m2[j]<m1[i]
        {
            result[k] = m2[j];
            j++;
            // k++;
        }
        k++; // dono me same condition ho rahi hai use k++ so remove reduncy// if else dono case me k++ hoga

        // for remaining element
        if (i == n) // meanig hai ki first vector ke sare element hi gye hai
        {
            while (j <= m - 1)
            {
                result[k] = m2[j];
                j++;
                k++;
            }
        }
        if (j == m) // meanig hai ki second vector ke sare element hi gye hai
        {
            while (i <= n - 1)
            {
                result[k] = m1[i];
                i++;
                k++;
            }
        }
    }
    return result;
}
int main()
{

    vector<int> v1;
    cout << "Enter the size of first vector: ";
    input(v1);
    vector<int> v2;
    cout << "Enter the size of second vector: ";
    input(v2);

    vector<int> v = merge(v1, v2); // merge yahan pe vectior function hai

    display(v);
    return 0;
}
