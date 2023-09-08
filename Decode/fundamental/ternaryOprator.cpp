// find number is odd or even using ternary
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number: ";
    cin >> n;
    // if (n % 2 == 0)
    //     cout << "even";
    // else
    //     cout << "odd";
    //     cout<<endl;

    // condition?exprestion1:exprestion2:

    // using ternary we solve this question
    n % 2 == 0 ? cout << "even" : cout << "odd";
    return 0;
}