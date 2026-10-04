//write a c prgrm to calculate simple interest.
#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("enter principal,rate and time= ");
	scanf("%d%d%d", &p, &r, &t);
	si=(p*r*t)/100;
	printf("simple interest is=%d",si);
	return 0;
}

