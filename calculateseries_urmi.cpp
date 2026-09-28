//2+5+8+11+14+....upto n terms wcp to calculate sum of the given series(using while loop).
#include<stdio.h>
int main()
{
	int n,sum=0,i=2;
	printf("enter the numbers=");
	scanf("%d",&n);
	while (i<=n)
	{
		sum=sum+i;
		i=i+3;
	}
	printf("sum of the following series=%d", sum);
	return 0;
}


