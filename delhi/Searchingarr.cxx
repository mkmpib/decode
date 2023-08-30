#include <iostream>
using namespace std;
int search(int a[],int key,int n){
	int index=-1;
	int i = 0;
	while(i<n){
		if(a[i] == key){
			index = i;break;}
			i++;
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
 for(int i = 0;i<n;i++){
 	  cin>>a[i];}
 	 
int key;
cout<<"Enter the key:"<<endl;
cin>>key;
 cout<<search(a,key,n);
	return 0;
}