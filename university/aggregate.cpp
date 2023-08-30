#include <iostream>
using namespace std;
int main()
{
	int m,m1,m2,m3,m4,aggre;
	float per;
	printf("Enter the marks of 5 subjects:\n ");
	scanf("%d%d%d%d%d",&m,&m1,&m2,&m3,&m4);
	aggre = m+m1+m2+m3+m4;
	per = aggre/5;
	printf("The aggregate marks are: %d\n",aggre);
	printf("The percentage is : %f\n",per);
	
 
	return 0;
}