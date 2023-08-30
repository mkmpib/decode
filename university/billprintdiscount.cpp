// Bill Print total Cost after giving discount.
#include<stdio.h>
int main(){
    int cost,qty,total,dis,tdis;
    printf("Enter the cost : ");
    scanf("%d",&cost);
    printf("Enter the quantity : ");
    scanf("%d",&qty);
    total=cost*qty;
    if(total<=1000){
        dis=0;
    }
    else if(total<=2000){
        dis=10;
    }
    else{
        dis=20;
    }
    tdis= total-(total*dis)/100;
    printf("You got the discount of %d%% after discount you have to pay %d",dis,tdis);

}