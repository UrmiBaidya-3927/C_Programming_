//write a c prgrm to calculate celcius to farenheit.
#include<stdio.h>
int main()
{
	float cel,far;
	printf("enter the temparature in celcius=");
	scanf("%f",&cel);
	far=(cel*(9.0/5.0))+32;
	printf("temparature in farenheit is=%.2f",far);
	return 0;
}

