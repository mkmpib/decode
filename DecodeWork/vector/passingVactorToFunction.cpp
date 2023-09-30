#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> a)
//void change(vector<int> &a)// if i use here & this oprator it change the value
{
    a[0] = 100; // otherwise it never change the values of vactor
}
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(9);
    v.push_back(5);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}