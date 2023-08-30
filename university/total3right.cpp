//what is neareat loop topp 
#include <iostream>
#include <stdio.h>
int main()
{
int math,sci,phy;
printf("enter the marks:");
scanf("%d%d%d",&math,&sci,&phy);
int total=math+sci+phy; 
printf("total is: %d\n",total);

int per=((total*100)/300);
if(per>=50){
	printf("pass");
}


	
 
	return 0;
}