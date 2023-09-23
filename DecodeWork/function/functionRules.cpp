#include <iostream>
using namespace std;
//function ka scope function tak hi hota hai
void fun(int x, int y)
{
    cout << x << "  " << y;
}
int main()
{

     fun(8,78);  // int will be run
    // fun(8.4,78);// ye bhi nhi calega kyoki vahan pe int hai
    // fun(8); /// ye bhi nhi calega kyoki isme dusra nhi hai
    // fun(8.5);// nhi calega kyoki data type int hai
}