//write a c prgrm to print 1+11+111+1111....upto n terms.
#include<stdio.h>
int main()
{
	int n;
	long long term=1;
	long long sum=0;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("the series is:");
	for (int i=1;i<=n;i++)
	{
		printf("%lld",term);
		//print "+" after each term except the last one
		if(i<n)
		{
			printf("+");
		}
		sum+=term;//add the current term to the total sum
		term=term*10+1;//generate the next (e.g.,1->11->111)
	}
	printf("\n the sum of the series upto %d terms is:%lld\n",n,sum);
	return 0;
	
}
