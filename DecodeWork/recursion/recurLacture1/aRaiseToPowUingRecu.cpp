#include <iostream>
using namespace std;
int pow(int a,int b){
    if(b==0)
        return 1;
        else
            return a * pow(a, b - 1);
}
int main()
{
    int a, b;
    cout << "Enter the number: " << endl;
    cin >> a;
    cout << "Enter the power:" << endl;
    cin >> b;
    cout << "The " << a << " power " << b << " is: " << pow(a,b);
    return 0;
}