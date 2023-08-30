#include <stdio.h>

int main()
{
 int n;
 printf("Enter the number:\n");
 scanf("%d",&n);
 if(n%2==0){
 	printf("%d is even number\n",n);
 }else{
 	printf("%d is odd number",n);
 }
	return 0;
}