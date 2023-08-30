#include <iostream>
using namespace std;

inline int cube(int x)
{
    return  x*x*x;
}

int moneyreceive(int currentMoney,float factor=1.04)
{
	return currentMoney*factor;
	}
int main(){
    /* Example of inline function:–--
    int x;
    cout<<"Enter the number:--"<<endl;
    cin>>x;
    cout<<"The cube of entered number is:--"<<cube(x)<<endl;*/
     int money=10000;
     cout<<"If you have "<<money<<"Rs you will be get "<<moneyreceive(money)<<"Rs after 1 year"<<endl;
     cout<<"For vip:-If you have "<<money<<"Rs you will be get "<<moneyreceive(money,1.1)<<"Rs after 1 year"<<endl;
    return 0;
}