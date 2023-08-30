#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> m(7);
    cout << "Enter the element of vector: ";
    for (int i = 0; i < m.size(); i++)
    {
        cin >> m[i];
    }
    int key;
    cout << "Enter the key for find the number of occurance: ";
    cin >> key;

    int count = 0;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] == key)
        {
            count++;
        }
    }
    cout << "The number of occurance of " << key << " is: " << count << endl;

    return 0;
}