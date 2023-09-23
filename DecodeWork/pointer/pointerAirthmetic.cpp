#include <iostream>
using namespace std;

int main()
{
    // int x = 7;
    // int *ptr = &x;
    // cout << ptr << endl; //0x7ffeff3fc15c
    // ptr = ptr + 1;
    // cout << ptr << endl;   //0x7ffeff3fc160 // adderess me data type ke size  according 1 didit ka size bad jata hai jese int hai to 4 byte bad jayege 

    int x = 7;
    int *ptr = &x; // 7
    cout << *ptr << endl; // 0x7ffeff3fc15c
    *ptr = *ptr + 1; //8
    cout << *ptr << endl; // 0x7ffeff3fc160
    return 0;
}