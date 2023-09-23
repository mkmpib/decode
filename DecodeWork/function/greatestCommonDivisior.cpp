// write a function to compute the greatest common divisior of two given  number

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i; //break use nhi karege ager kiya ti ans 1 hi ayega kyiki condition true ho jayegi or loop break hi jayega
        }
    }
    return hcf;
}

// optimize way to find hcf

// int gcd(int a,int b){
//     int hcf=1;
//     for(int i=min(a,b);i>=1;i--){
//         if(a%i==0&&b%i==0){
//             hcf=i;
//             break;
//         }
//     }
//     return hcf;
// }
int main()
{
    int a, b;
    cout << "Enter the number 1st: ";
    cin >> a;
    cout << "Enter the number 1st: ";
    cin >> b;
    cout << "The highest common divisor is : " << gcd(a, b) << endl;
    return 0;
}