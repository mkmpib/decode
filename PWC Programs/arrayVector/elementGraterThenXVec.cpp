#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> m(4);
    cout << "Enter the element of vector: ";
    for (int i = 0; i < m.size(); i++)
    {
        cin >> m[i];
    }
    int key;
    cout << "Enter the key for find the number of elemnt ar grater: ";
    cin >> key;

    int count = 0;
    for (int i = 0; i < m.size(); i++)
    {
        if (key > m[i])
        {
            count++;
        }
    }
    cout << "The number of element that are grater from " << key << " is: " << count << endl;

    return 0;
}