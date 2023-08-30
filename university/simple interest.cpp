#include<stdio.h>
int main(){
	int t,p;
	float r,si;
	printf("Enter the princpal amount: \n");
	scanf("%d",&p);
	printf("Enter the time: \n");
	scanf("%d",&t);
	printf("Enter the rate of interst:\n");
	scanf("%f",&r);
    si=p*t*r/100;
    printf("The simple interst is%f:",si);
	return 0;
	
}