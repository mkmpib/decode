#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {0,1, 2,3,5,6,7,8,9};
    int n = 9;
    int target;

    for (int i = 0; i < n;i++){
        if(i!=nums[i]){
            cout << "The smallest missing element is: " << i << endl;
            
            break;
        }
    }
        return 0;
}
