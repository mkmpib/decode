#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4); // store element in vector
    v.push_back(6);
    v.push_back(9);
    v.push_back(5);
    v.at(3) = 45;            // it change the value 5 to 45
    cout << v.at(2) << endl; // it returns us 9 tah t is placed in third place

    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " "; // isko karke bhi function print hi jayega
    }
    cout<<endl;
    //sort
    // sort(v.begin(),v.end());  //it give eeror to this time
    //  for (int i = 0; i < v.size(); i++)
    // {
    //     // cout << v[i] << " ";
    //     cout << v.at(i) << " "; // isko karke bhi function print hi jayega
    // }
    // cout<<endl;

    return 0;
}