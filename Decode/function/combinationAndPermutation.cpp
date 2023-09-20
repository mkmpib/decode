// find ncr using function

#include <iostream>
using namespace std;

int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int permutation(int n, int r)
{
    int npr = fact(n) / fact(n - r);
    return npr;
}
int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << "The vlaue of ncr is :" << combination(n, r) << endl;
    cout << "The vlaue of ncr is :" << permutation(n, r) << endl;

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, r;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Enter the value of r: ";
//     cin >> r;
//     int nfact = 1; // if value of n is 1 then it rertrn 1;
//     for (int i = 2; i <= n; i++)
//     {
//         nfact *= i;
//     }
//     // cout << nfact;//
//     int rfact = 1;
//     for (int i = 2; i <= r; i++)
//     {
//         rfact *= i;
//     }
//     int nrfact = 1;
//     for (int i = 2; i <= n - r; i++)
//     {
//         nrfact *= i;
//     }
//     int ncr = nfact / (rfact * nrfact);
//     cout << "The vlaue of ncr is :" << ncr << endl;

//     return 0;
// }