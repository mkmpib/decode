#include <iostream>
using namespace std;
int main()
{
	int math,sci,phy,eng;
	printf("Enter the marks of math:");
	    scanf("%d",&math);
	printf("Enter the marks of sci:");
		scanf("%d",&sci);
    printf("Enter the marks of phyy:");
		scanf("%d",&phy); 
	printf("Enter the marks of eng:");
		scanf("%d",&eng);
	int total = math+sci+phy+eng;
	printf("The total is:%d\n",total);
	float per=total/4
	printf("The percentage is:%f",per);
	return 0;
}	