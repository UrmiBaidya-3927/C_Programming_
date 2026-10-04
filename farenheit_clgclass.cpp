//write a prgrm to calculate farenheit to celcius.
#include<stdio.h>
int main()
{
	float far,cel;
	printf("enter temparature in farenheit=");
	scanf("%f",&far);
	cel=(far-32)/1.8;
	printf("temparature in celcius=%.2f",cel);
	return 0;
}

