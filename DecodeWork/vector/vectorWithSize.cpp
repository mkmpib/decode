#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n(5); // here we declare the size along with vector
    vector<int> v(5,7);// here we give size and give 7 value to each element
    cout << v.size() << endl; // the output will 5
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}