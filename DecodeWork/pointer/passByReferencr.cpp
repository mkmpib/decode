#include <iostream>
using namespace std;
void swap(int *a, int *b) // main se value pass kar rahe hai isme
/// bina pointer ke swap nhi clega
{
    //  int* tamp; /// tanp ki place per or variable bhi likh skate hai
    int tamp = *a;
    *a = *b;
    *b = tamp; // value change  hongi kyoki hmne address ko hi pass kiya hai
    cout << "After swap number are : " << *a << "  " << *b << endl;
    return;
}
int main()
{
    int a, b;
    cout << "Enter the number 1st: ";
    cin >> a;
    cout << "Enter the number 1st: ";
    cin >> b;
    // int tamp; /// tanp ki place per or variable bhi likh skate hai
    // tamp = a;
    // a = b;
    // b = tamp;
    cout << "beforer swap number are : " << a << "  " << b << endl;
    swap(&a, &b);

    return 0;
}