#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number:";
    char a;
    cin >> a;
    cout << "Enter the number:";
    char b;
    cin >> b;
    int sum = a + b;
    cout << "The sum is: " << sum << endl; // The output we get is 199 because
    cout << endl;
    char c;
    cout << "Enter the value that you want ASCII: " << endl;
    cin >> c;
    cout << "The ASCII value is : " << (int)c << endl; // to cheak the asxcii valuee of character

    // most imp ascii values
    // "A" = 65 'a' = 97 '0' = 48 'b' = 66 'b' = 98 '1' = 49 return 0;
}