#include <iostream>
using namespace std;

int main()
{
    // int a=4;
    // int *ptr=&a;
    // int b=++(*ptr); // pehle value bdayega or or fir printbkrega
    // cout<<a<<"  "<<b;
  

  int a=4;
    int *ptr=&a;
    int b=(*ptr)++;  // pehle ye value ko assign karega or agli baar badayega
    cout<<a<<"  "<<b;
    return 0;
}