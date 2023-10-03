//  // two pass solution
//         int n=nums.size();
//         int num0=0;
//         int num1=0;
//         int num2=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0) num0++;
//             else if(nums[i]==1) num1++;
//             else num2++;
//         }
//         // filling of 123
//         for(int i=0;i<n;i++){
//             if(i<num0) num[i]=0;
//             else if(i<(num0+num1)) num[i]=1;
//             else nums[i]=2;
//         }
//         return;
class Solution {
public:
    void sortColors(vector<int>& nums) {
    //    one pass solution
    int lo=0;
    int mid=0;
    int hi =nums.size()-1;
    // 1)mid ke baare me soche 
    //2. 0 to low-1 -->0,hi+1 to end-->2
    // lo tp mid-1--> 1;
while(mid<=hi){
    if(nums[mid]==2){
        int temp= nums[mid];
        nums[mid]=nums[hi];
        nums[hi]=temp;
        hi--;
    }
    else if(nums[mid]==0){
       int temp= nums[mid];
        nums[mid]=nums[lo];
        nums[lo]=temp;
        lo++;
        mid++; 
    }else mid++;
}  
    }
};