#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n; // if we not give size to it then it not taking input from user        
    vector<int> v(5);    
    cout << v.size() << endl; 
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}