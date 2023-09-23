#include <iostream>
using namespace std;
//void swap(int &a, int &b) // ab cal jayega kyoki ham adress pass akrke main vali values ko hi change kar rahe ahia
void swap(int a, int b) // main se value pass kar rahe hai isme
/// bina pointer ke swap nhi clega
{
    int tamp; /// tanp ki place per or variable bhi likh skate hai
    tamp = a;
    a = b;
    b = tamp; // value nhi hange hongi
    return;
}
int main()
{
    int a, b;
    cout << "Enter the number 1st: ";
    cin >> a;
    cout << "Enter the number 1st: ";
    cin >> b;
    int tamp; /// tanp ki place per or variable bhi likh skate hai
    tamp = a;
    a = b;
    b = tamp;
    cout << "After swap number are : " << a << "  " << b << endl;

    // cout << "After swap number are : " << swap(a, b) << endl;
    return 0;
}