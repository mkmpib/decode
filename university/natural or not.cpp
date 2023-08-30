//WAP the enter number is natural number

#include <stdio.h>
int main()
{
	int a;
	printf(" Enter the number:\n");
	scanf("%d",&a);
	if(a>0){
		printf("%d is a natural number",a);
	}else{
		printf("%d is not a natural number",a);
	}
	return 0;
}