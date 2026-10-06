//write a c prgrm to calculate sum of digits.
#include<stdio.h>
int main()
{
	int a,b,sum=0;
	printf("enter the numbers:");
	scanf("%d",&b);
	while(b!=0)
	{
		a=b%10;
		sum=sum+a;
		b=b/10;
	}
	printf("the sum of digits is:%d",sum);
	return 0;
}
