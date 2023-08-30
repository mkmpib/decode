#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> n; // place of n we also write number and other variable
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.push_back(1); // for entering the element
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.push_back(2);
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.push_back(3);
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.push_back(4);
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.push_back(1);
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.resize(10);
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    // if  i give the size 1 then my size will be 1 but capacity will be 10
    // n.resize(1);
    // cout << " size: " << n.size() << endl;
    // cout << " capacity: " << n.capacity() << endl;

    n.pop_back(); // decrase the size of vector
    n.pop_back();
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    n.clear();
    cout << " size: " << n.size() << endl;
    cout << " capacity: " << n.capacity() << endl;

    return 0;
}