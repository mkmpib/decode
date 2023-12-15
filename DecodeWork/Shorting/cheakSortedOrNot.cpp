#include<iostream>
using namespace std;
int main(){

bool flage=true;
int n;
    cout << "Enter the size of aray: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     // cheaking sorted or not
    for(int i=0;i<n-1;i++)// n-1 kyouki last element ko chek nhi karege 
   {
    if(arr[i]>arr[i+1]){
        flage= false;
        break;
    }
   }
if(flage==true){
    cout<<"SORTED"<<endl;
}else{
    cout<<"UNSORTED"<<endl;
}
//  cout<<flage; // 0 or 1 return karega

    return 0;

}