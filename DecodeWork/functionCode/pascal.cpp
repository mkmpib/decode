#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for (int i = 2; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int combination(int n, int r)  / n or r ki jaga pe hum i or j ki values pass karege
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}
int main(){

int n;
cout<<"Enter the number of lines that you want in your pascal triandle: ";
cin>>n;

for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<combination(i,j)<<" ";
    }cout<<endl;
}
    return 0;

}