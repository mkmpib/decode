#include <iostream>
using namespace std;
int add(int x,int y){
	int z=x+y;
	return z;
}

int main()
{
  int x,y;
  cin>>x>>y;
	int plus=add(x,y);
	cout<<plus;

	return 0;
}