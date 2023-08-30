#include <iostream>
using namespace std;

class y;
class x
{
	int data;
	public:
	void setValue(int value)
	{
		data=value;
		}	
		friend void sum(x,y);
};

class y
{
	int num;
	public:
	void setValue(int value)
	{
		num=value;
		}
		friend void sum(x,y);	
};
void  sum(x n1,y n2)
{
	cout<<"The sum of x and y is:"<<n1.data+n2.num<<endl;
	}
int main()
{
	x r1;
	r1.setValue(45);
	
	y r2;
	r2.setValue(56);
	
	sum(r1,r2);
	
	return 0;
} 