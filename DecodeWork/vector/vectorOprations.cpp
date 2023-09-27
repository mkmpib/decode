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

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back(); // delete your last element
    v.pop_back(); // but it nrver change your capacity
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}