#include<iostream>
using namespace std;

int floor (int a[], int n, int key ){
    int index = -1;
    int start = 0;
    int end = n-1;
    while(start<=end){

        int mid = (start + end)/2;
        if(a[mid]<key){
            start = mid+1;
            index = mid;
        }
        else if(a[mid]>key){
        	end = mid - 1;}
        else {
            index =  mid ;
            break;
        }
       

    }
    return index ;

}

int main(){
    int n;
    cout<<"enter the size of arrt"<<endl;
    cin >>n;

    int  a[n];
    cout<<"enter the array \n";
    for(int i=0; i<n; i++){
        cin>>a[i];

    }

    int key;
    cout<<"enterthe key \n";
    cin>>key;

    cout<<floor (a,n, key);

    return 0;

}