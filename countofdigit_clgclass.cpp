//write a c prgrm to count the digit of a whole number....
#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter the number:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c+1;
		a=a/10;
	}
	printf("the count of digit is:%d",c);
	return 0;
}
