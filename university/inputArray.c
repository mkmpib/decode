#include <stdio.h>

int main()
{

int a[5];
int b[5];


for(int i=0;i<4;i++){

printf("enter the array:");
scanf("%d",&a[i]);
int c=a[i]+10;
printf("The value after add 10 is: %d\n",c);
}

	return 0;
}