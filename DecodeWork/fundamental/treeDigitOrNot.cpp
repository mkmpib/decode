#include <iostream>

using namespace std;
int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n >= 100 && n <= 999)
        cout << "yes";
    else
        cout << "NO";
        cout<<endl;
    return 0;
}