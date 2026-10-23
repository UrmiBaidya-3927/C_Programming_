//write a c prgrm to calculate the sum of numbers from 1 to n.
#include<stdio.h>
int main()
{
	int n,i=1;
	int sum=0;
	printf("enter the value:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("the sum of numbers from 1 to n:%d\n",sum);
	return 0;
}
