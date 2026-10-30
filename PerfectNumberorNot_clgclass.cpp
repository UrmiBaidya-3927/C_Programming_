//write a c prgrm to check if a number is perfect or not.

#include<stdio.h>
int nain()
{
	int n,s=0,i=1;
	printf("enter any number:");
	scanf("%d", &n);
	while(i<n)
	{
		if(n%i==0)
		s+=i;
		i++;
	}
	if(s==n)
	printf("it is not a perfect number");
	else
	printf("it is not a  perfect number");
	return 0;
}



