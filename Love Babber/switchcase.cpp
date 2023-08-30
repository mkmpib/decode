#include <iostream>
using namespace std;
int main()
{
       int num = 1;
       char ch = '1';
       // cout << "Enter the number: ";
       // cin >> num;
       switch (2 * num)
       {

       case 1:
              cout << "first";
              break;
       case 2:
              cout << "second";
              break;

       case '1':
              switch (num)
              {
              case 1:
                     cout << "The number is is:" << num << endl;
                     break;
              }
              break;
       default:
              cout << "default" << endl;
              break;
       }

       return 0;
}