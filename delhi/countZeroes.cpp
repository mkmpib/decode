#include <iostream>
using namespace std;
int countZeroes(int a[],int n){
  int index = -1;
  int start = 0;
  int end = n-1;
while(start <= end){
   	int mid =(start + end)/2;
       if(a[mid] ==0){
       	start = mid+1;
       	index = mid;
       }else{
       	end = mid-1;
       }
}
return index+1;

       	
   		
}
int main()
{
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the array:"<<endl;
for(int i = 0;i < n;i++){
	cin>>a[i];
}
cout<<countZeroes (a,n);	
 
	return 0;
}