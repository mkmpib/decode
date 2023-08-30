#include <stdio.h>

int main()
{
	float km,m,ft,cm,inch;
	printf("Enter the distance of citys in kilometers: \n");
	scanf("%f",&km);
	m = km*1000;
	cm = m*100;
	inch = cm/2.54;
	ft = inch/12;
	printf("Distance in meters = %f\n", m);
	printf("Distance in centimeters = %f\n",cm);
	
	return 0;
	}