#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // vector<int> m;
    vector<int> m(5); // if we declare size int the vector then there is no need to declare element in loop
    cout << "Enter the element of vector: ";
    for (int i = 0; i < m.size() /*i<5*/; i++) // when we not declare size then we use (i<5) this
    {
        // int element;
        // cin >> element;
        // m.push_back(element);
        cin >> m[i];
    }

    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << " ";
    }
    m.insert(m.begin() + 2, 7);
    cout << endl;

    // for each loop
    cout << "using for each loop: " << endl;
    for (int element : m)
    {
        cout << element << " ";
    }
    m.erase(m.end() - 2);
    cout << endl;

    // while loop
    cout << "using while loop: " << endl;
    int i = 0;
    while (i < m.size())
    {
        cout << m[i] << " ";
        i++;
    }
    cout << endl;

    m.clear(); // all element are clear

    while (i < m.size())
    {
        cout << m[i] << " ";
        i++;
    }
    cout << endl;
    return 0;
}