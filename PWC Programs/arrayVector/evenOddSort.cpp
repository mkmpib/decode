// given an array of intiger move all even number at the begining and odd number at the end of array. realative order does not metter(5,3,9)ese bhi ho skte hai! jarurri nhi hai ki 1,3,5 order me ho;



#include <iostream>
#include <vector>
using namespace std;

void sortByParity(vector<int> &m)
{

    int leftPtr = 0;
    int rightPtr = m.size() - 1;

    while (leftPtr < rightPtr)
    {

        if (m[leftPtr] % 2 == 1 && m[rightPtr] % 2 == 0)
        {
            swap(m[leftPtr], m[rightPtr]);
            leftPtr++;
            rightPtr--;
        }
        if (m[leftPtr] % 2 == 0)
        {
            leftPtr++;
        }
        if (m[rightPtr] % 2 == 1)
        {
            rightPtr--;
        }
    }
}
int main()
{

    int n; // n=size
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortByParity(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    return 0;
}//new