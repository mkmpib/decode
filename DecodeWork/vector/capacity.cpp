#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;  // for inputing the values dont use {} it is defferent from array
    v.push_back(4); // store element in vector
    v.push_back(6);
    v.push_back(9);
    v.push_back(5);
    v.push_back(9);
    v.push_back(5);
    v.push_back(9);
    v.push_back(5);
    v.push_back(9);
    v.push_back(5);
    v.push_back(9);
    v.push_back(5);
    v.push_back(9);
    v.push_back(5);
    cout << "the size is: " << v.size() << endl;
    cout << "the capacity is: " << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "the size is: " << v.size() << endl;
    cout << "the capacity is: " << v.capacity() << endl;
    // capacity nhi reduce hogi but element reduce ho jayege
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}