//write a c prgrm to display the first n(n>0) terms of the tribonacci series.
#include<stdio.h>
int main()
{
	int a=0,b=1,c=1,d,n,i;
	printf("enter the terms:");
	scanf("%d",&n);
	printf("tribonacci series:");
	while(i<=n)
	{
		printf("%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	}
	printf("\n the tribonacci series is:%d",d);
	return 0;
}
