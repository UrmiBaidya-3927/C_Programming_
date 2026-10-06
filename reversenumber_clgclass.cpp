//write a c prgrm to reverse the digits of a whole number.
#include<stdio.h>
int main()
{
	int a,b,rev;
	printf("enter the number of reverse:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		rev=rev*10+b;
		a=a/10;
	}
	printf("the reverse of the digit is:%d",rev);
	return 0;
}
