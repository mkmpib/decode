// write a program to print the sum of two number using poimter
#include <iostream>
using namespace std;

int main()
{
//    int a, b;
//     cout << "Enter the number 1st: ";
//     cin >> a;
//     cout << "Enter the number 1st: ";
//     cin >> b;
//     int *p1=&a;
//     int *p2=&b;
//     cout<<*p1+*p2<<endl;

   //taking input using pointer
    int a, b;
     int *p1=&a;
    int *p2=&b;
    cout << "Enter the number 1st: ";
    cin >> *p1;
    cout << "Enter the number 1st: ";
    cin >> *p2;
   
    cout<<*p1+*p2<<endl;

    return 0;
}