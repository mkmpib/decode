//WAP that find the amallest number to given two numbers
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of number a&b:\n");
	scanf("%d%d",&a,&b);
	if(a<b){
		printf("The smallest number is:%d",a);
		}
	else if (a>b)
		{
			printf("The smallest number is:%d",b);
			}
	 else{
	 	printf("Both are equal");
	 	}		
	return 0;
}