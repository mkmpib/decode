//quantity and cost calculate and use if-else if--else statement
#include <stdio.h>
int main()
{
int quantity;
int cost;
 printf("Enter the Quantity:");
 scanf("%d",&quantity);
 printf("Enter the Cost:");
 scanf("%d",&cost);
 int total = quantity*cost;
 printf("The Total is:%d\n",total);
  if(total<=500)
  {
  	printf("No Discount");
  }
  else if(total<1000)
  {
  	int discount = (total*5)/100;
  	printf("Give Discount 5 that is:%d\n",discount);
  	int gt = total -discount;
 printf("The Grand Total is:%d",gt);
  }
  else
  {
   int discount = (total*7)/100;
  	printf("Give Discount 7%% that is:%d\n",discount);
  	int gt = total - discount;
 printf("The Grand Total is:%d",gt);
  }

	return 0;
}