/*write a c prgrm to print the following pattern(user defined),
   4
  434
 43234
4321234        */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(j=n;j>=i;j--)
		printf("%d",j);
		for(j=i+1;j<=n;j++)
		printf("%d",j);
		printf("\n");
	}
	return 0;
}
