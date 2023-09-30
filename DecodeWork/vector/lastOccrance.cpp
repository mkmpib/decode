#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> m(5);
    cout << "Enter the element of vector: ";
    for (int i = 0; i < m.size(); i++)
    {
        cin >> m[i];
    }
    int key;
    cout << "Enter the key for find the last occurance: ";
    cin >> key;

    int occurance = 0;

    // for (int i = 1; i <= m.size(); i++)
    // {
    //     if (m[i] == key)
    //     {
    //         cout<<i;
    //     }
    // }
    //  cout << "The last occurance of " << key << " is: " << occurance << endl;

    // best trika hai  ki hum apne loop ko last se trivse kare
    for (int i = m.size()-1; i >0 ; i--)
    {
        if (m[i] == key)
        {
            occurance = i;
            break;
        }
    }
    cout << "The last occurance of " << key << " is: " << occurance << endl;

    return 0;
}