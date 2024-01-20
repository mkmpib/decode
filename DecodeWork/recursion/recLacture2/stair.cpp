/*#include <bits/stdc++.h>
using namespace std;
int stair(int n)
{
    if (n == 1) return 1;
    if (n ==2) return 2;
    else
        return stair(n - 1) + stair(n - 2);
}
int main()
{
    cout << stair(4);
}*/

// if he can jjump 3 stair at a time
#include <bits/stdc++.h>
using namespace std;
int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 3)
        return 2;
    else
        return stair(n - 1) + stair(n - 2);
}
int main()
{
    cout << stair(4);
}