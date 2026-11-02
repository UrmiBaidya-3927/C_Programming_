/*write a c prgrm to print 
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1         this pattern.*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter number of lines:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
        {
        	printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
 