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
    cout << "Enter the key for find the first occurance: ";
    cin >> key;

    int occurance = -1;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] == key)
        {
            occurance = i;
            break;
        }
    }
    cout << "The first occurance of " << key << " is: " << occurance << endl;

    return 0;
}