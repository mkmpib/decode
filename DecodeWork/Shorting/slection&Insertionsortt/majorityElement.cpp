#include<bits/stdtr1c++.h>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1, 2, 1, 2, 1, 2, 2};
    int n=7;
    cout << "The unsorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The Sorted array is: ";
    // INsertion sort
    for (int i = 1; i < n; i++) // 0 se bhi cla skte h i ko
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
     
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > (n / 2))
            cout<< arr[i];
            }
    return 0;
}
// go leetcode 169
// class Solution
// {
// public:
//     int majorityElement(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         return nums[(nums.size() / 2)];

//         // int n=nums.size();
//         // for(int i=0;i<n;i++){
//         //     int count=1;
//         //     for(int j=i+1;j<n;j++){
//         //         if(nums[i]==nums[j])count++;
//         //     }
//         //     if(count>(n/2)) return nums[i];
//         // }
//         // return -1;
//     }
// };