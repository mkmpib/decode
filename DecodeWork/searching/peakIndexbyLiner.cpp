// find peak index of mountain aray
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int idx = -1;//storing the peak index of array
    int n = 9;
    for (int i = 1; i <= n - 2;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
           // idx = arr[i]; // for giving the value of the index
           idx = i;// for return the index of the peak element
           break;
        }
    }
    cout << idx;
}
