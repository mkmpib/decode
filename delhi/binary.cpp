#include <iostream>
using namespace std;

int binarySearch(int a[],int key,int n){
	int index=-1;
	int start=0, end=n-1;
	
while(start<=end){
	int mid =(start + end)/2;
	if(a[mid]>key){
		end = mid-1;
	}
	else if(a[mid]<key){
		start=mid+1;
	}
	else{
		index=mid;
		break;
	}
}	
		
return index;		
}
	
int main()
{
int n;
cout<<"Enter the size of array:"<<endl;
cin>>n;
int a[n];
cout<<"Enter the array:"<<endl;
for(int i =0;i<n;i++){
    cin>>a[i];
}
int key;
cout<<"Enter the key:"<<endl;
cin>>key;

cout<<binarySearch(a,key,n);
 
	return 0;
}