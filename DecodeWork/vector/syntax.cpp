#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;  // for inputing the values dont use {} it is defferent from array
    v.push_back(4); // store element in vector
cout << v.capacity() << endl;
    //cout << v.size() << endl; // its gives size to your vector=1
    v.push_back(6);
    cout << v.capacity() << endl;
    v.push_back(9);
    //cout << v.size() << endl;
    cout << v.capacity() << endl; // tells vector capacity
    v.push_back(5);
    cout << v.capacity() << endl;

    //   cout<<v[0]<<" ";
    //   cout<<v[1]<<" ";
    //   cout<<v[2]<<" ";
    //   cout<<v[3]<<" ";
    v[2] = 55;
    // alternate to printing
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}