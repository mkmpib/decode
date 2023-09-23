// 1 1 2 3 5 8 13
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of term: ";
    cin >> n;
    int firNum = 1;
    int secNum = 1;
    int nextNum;
    for (int i = 0; i <= n; i++)
    {
        cout <<"  " <<firNum;
        nextNum = firNum + secNum;
        firNum = secNum;
        secNum = nextNum;
    }
    cout<<endl;
    return 0;
}