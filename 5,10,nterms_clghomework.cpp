//write a c prgrm to print 5,10,15,20.....upto n terms.
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",5*i);
		i++;
	}
	return 0;
}

